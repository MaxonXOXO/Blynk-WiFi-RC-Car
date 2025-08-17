# 🚗 Wi-Fi Controlled RC Car (Tank-Style) with Blynk IoT  

Control your RC car **anywhere in the world** using the **Blynk IoT app** and an **ESP8266**!  
This project uses a **joystick widget** for smooth forward/backward and left/right tank-style movement.  

---
## 📸 Demo Preview  

![3](https://github.com/user-attachments/assets/136c8e0c-14f2-4cb6-bc53-948a9ffe2f2e)
![2](https://github.com/user-attachments/assets/e7c1cb89-2b59-400e-bdf4-d745e1f9e72d)
![1](https://github.com/user-attachments/assets/f32fb014-cf14-4c8f-b495-c7a1ba8b282d)
![4](https://github.com/user-attachments/assets/1a9cbf39-d74f-4a46-a04d-5511961b43e8)
![5](https://github.com/user-attachments/assets/06da1235-b5fd-4e3a-a98f-809125d568e0)
![6](https://github.com/user-attachments/assets/a2f5f1aa-4d27-4fdd-9140-40000d029b2d)
![15](https://github.com/user-attachments/assets/b8302d9b-47e4-49fc-b4c2-074a6ce78eea)
![8](https://github.com/user-attachments/assets/c2091d87-cd03-4c4b-857d-4b73aef95a35)
![13](https://github.com/user-attachments/assets/b51ac1b9-2da6-42e5-8be9-09c494121d50)
![14](https://github.com/user-attachments/assets/45f3b993-783c-4915-aced-0e994b2ec6a6)

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

1. Create a **Blynk IoT project** (Template Name: `RC CAR`). [Create a Blynk.io account if you already don't have one!]
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


## 🚀 Getting Started [Blynk Setup!]

1. **Upload the code** to your ESP8266 using Arduino IDE and make sure you have changed the #wifi and #password to your own personal credentials!.
2. **Power up** your RC car and open the Blynk app.  
3. Push the **joystick** to move your car in real-time!  
![9](https://github.com/user-attachments/assets/76723653-d4a9-4205-a2de-c1e6f9bcaf76)
![11](https://github.com/user-attachments/assets/e9b07552-e521-457c-9afa-23919f50ac5b)
![12](https://github.com/user-attachments/assets/1ed9b586-fdcf-4f10-b699-505a3dff0005)
![10](https://github.com/user-attachments/assets/fb829b9b-5575-4af3-a37d-fe99f26f2f4f)

---


## 📄 License  
This project is open-source under the MIT License — feel free to modify and share.  

---

💡 *Built with ♥ by MAXONXOXO!*  
