# 🚗 Wi-Fi Controlled RC Car (Tank-Style) with Blynk IoT  

Control your RC car **anywhere in the world** using the **Blynk IoT app** and an **ESP8266**!  
This project uses a **joystick widget** for smooth forward/backward and left/right tank-style movement.  

---

## ✨ Features  
- 🌐 **Wi-Fi Control** — drive your car remotely via Blynk IoT.  
- 🎮 **Joystick Steering** — tank-style turns for sharp maneuvering.  
- ⚡ **Instant Response** — low-latency ESP8266 + Blynk communication.  
- 🔄 **Reconnect Support** — syncs movement state when reconnecting.  
- 🛡 **Motor Safety** — motors always stop before changing direction.  

---

## 🛠 Hardware Required  

| Component            | Quantity | Notes |
|----------------------|----------|-------|
| ESP8266 (NodeMCU)    | 1        | Wi-Fi microcontroller |
| L298N Motor Driver   | 1        | Controls 2 DC motors |
| DC Motors + Wheels   | 2 pairs  | Left + Right side |
| Power Supply         | 1        | Li-ion / Li-Po / AA pack |
| Chassis              | 1        | Holds motors + electronics |
| Jumper Wires         | As needed | Male-Male / Male-Female |

---

## 📱 Blynk App Setup  

1. Create a **Blynk IoT project** (Template Name: `RC CAR`).
2. Add a **Joystick widget** and set it to **merge mode**:  
   - **Vertical (Y-axis)** → Virtual Pin **V0** (0=Backward, 1=Stop, 2=Forward)  
   - **Horizontal (X-axis)** → Virtual Pin **V1** (0=Left, 1=Stop, 2=Right)  
3. Set joystick range **0 → 2** for each axis.  
4. Copy your **BLYNK_AUTH_TOKEN** into the code.

---

## ⚙️ Wiring Diagram  

| ESP8266 Pin | L298N Pin  | Function               |
|-------------|-----------|------------------------|
| D0          | IN1       | Left Motor Forward     |
| D1          | IN2       | Left Motor Backward    |
| D2          | IN3       | Right Motor Forward    |
| D3          | IN4       | Right Motor Backward   |
| VIN         | 12V +     | Motor Power Supply     |
| GND         | GND       | Common Ground          |

---

## 💻 Code  

```cpp
// Full source code is in this repository
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Motor pins, Wi-Fi credentials, and Blynk setup here...
```

---

## 🚀 Getting Started  

1. **Upload the code** to your ESP8266 using Arduino IDE.  
2. **Power up** your RC car and open the Blynk app.  
3. Push the **joystick** to move your car in real-time!  

---

## 📸 Demo Preview  

*(Add a GIF or image of your RC car here)*  

---

## 📄 License  
This project is open-source under the MIT License — feel free to modify and share.  

---

💡 *Built with love by Gautham D.*  
