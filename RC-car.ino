#define BLYNK_TEMPLATE_ID "TMPL3_ao8Dcw9"
#define BLYNK_TEMPLATE_NAME "RC CAR"
#define BLYNK_AUTH_TOKEN "gQX12vdF1__5MFcC7RRnrKl29QsyG_hv"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>



// Motor Pins (L298N)
#define IN1 D0  // Left motor forward
#define IN2 D1  // Left motor backward
#define IN3 D2  // Right motor forward
#define IN4 D3  // Right motor backward

// WiFi credentials
char ssid[] = "hotspot";
char pass[] = "admin123";

// State variables (like Sowing BOT)
struct {
  uint8_t moveState = 1;  // V0: 0=Backward, 1=Stop, 2=Forward
  uint8_t turnState = 1;  // V1: 0=Left, 1=Stop, 2=Right
} state;

void setup() {
  Serial.begin(9600);
  
  // Initialize motor pins (all LOW on startup)
  pinMode(IN1, OUTPUT); digitalWrite(IN1, LOW);
  pinMode(IN2, OUTPUT); digitalWrite(IN2, LOW);
  pinMode(IN3, OUTPUT); digitalWrite(IN3, LOW);
  pinMode(IN4, OUTPUT); digitalWrite(IN4, LOW);
  
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
  updateMotors(); // Update motors based on state
}

// Update motor outputs (Tank-style)
void updateMotors() {
  // Stop all motors first (safety)
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  // Forward/Backward logic (V0)
  if (state.moveState == 2) {       // Forward
    digitalWrite(IN1, HIGH);  // Left forward
    digitalWrite(IN3, HIGH);  // Right forward
  } 
  else if (state.moveState == 0) {  // Backward
    digitalWrite(IN2, HIGH);  // Left backward
    digitalWrite(IN4, HIGH);  // Right backward
  }

  // Tank Turn logic (V1) - Overrides moveState if turning
  if (state.turnState == 0) {      // Left turn
    digitalWrite(IN2, HIGH);  // Left backward
    digitalWrite(IN3, HIGH);  // Right forward
  } 
  else if (state.turnState == 2) {  // Right turn
    digitalWrite(IN1, HIGH);  // Left forward
    digitalWrite(IN4, HIGH);  // Right backward
  }
}

// Blynk Virtual Pin Handlers (0-1-2 values)
BLYNK_WRITE(V0) { // Forward/Backward
  state.moveState = param.asInt();
  Serial.print("Move: ");
  Serial.println(state.moveState);
}

BLYNK_WRITE(V1) { // Left/Right Turn
  state.turnState = param.asInt();
  Serial.print("Turn: ");
  Serial.println(state.turnState);
}

BLYNK_CONNECTED() {
  Blynk.syncVirtual(V0, V1); // Sync states on reconnect
}