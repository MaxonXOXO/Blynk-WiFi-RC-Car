
___  ___  ___  __   _______ _   _ __   _________   _______  
|  \/  | / _ \ \ \ / /  _  | \ | |\ \ / /  _  \ \ / /  _  | 
| .  . |/ /_\ \ \ V /| | | |  \| | \ V /| | | |\ V /| | | | 
| |\/| ||  _  | /   \| | | | . ` | /   \| | | |/   \| | | | 
| |  | || | | |/ /^\ \ \_/ / |\  |/ /^\ \ \_/ / /^\ \ \_/ / 
\_|  |_/\_| |_/\/   \/\___/\_| \_/\/   \/\___/\/   \/\___/  
                                                            

---

# **Libraries Required**  
*(For Blynk WiFi RC Car Project)*  

### **Core Libraries** 
____________________________________________________________________________________________________________________ 
| Library | Version | Installation                                                 | Purpose                        | 
|---------|---------|--------------------------------------------------------------|--------------------------------|                                                                                               
| **Blynk** | 1.1.0 | Arduino Library Manager or `arduino-cli lib install "Blynk"` | Blynk IoT platform integration |
| **ESP8266WiFi** | 3.0.2 | Built into ESP8266 Arduino Core | WiFi connectivity for ESP8266                         |

### **Optional (Recommended)**  
| Library | Version | Installation | Purpose |
|---------|---------|--------------|---------|
| **BlynkSimpleEsp8266** | 1.0.0 | Auto-included with Blynk | ESP8266-specific Blynk helpers |
| **ArduinoJSON** | 6.21.0 | `arduino-cli lib install "ArduinoJSON"` | For advanced Blynk command handling |

---

### **Installation Methods**  

#### **1. Arduino IDE**  
- Open *Sketch > Include Library > Manage Libraries...*  
- Search and install:  
  - `Blynk`  
  - `ESP8266WiFi` (via ESP8266 Board Package)  

#### **2. PlatformIO**  
Add to `platformio.ini`:  
```ini
lib_deps = 
    blynkkk/Blynk@^1.1.0
    ESP8266WiFi
```

#### **3. Manual Installation**  
1. Download from:  
   - [Blynk Library](https://github.com/blynkkk/blynk-library/releases)  
   - [ESP8266WiFi](https://github.com/esp8266/Arduino)  
2. Extract to Arduino `libraries` folder  

---

### **Version Compatibility**  
Tested with:  
- Blynk `1.1.0`  
- ESP8266 Arduino Core `3.0.2`  

> 💡 **Tip**: Use exact versions to avoid API conflicts.

---

### **Troubleshooting**  
- **"Blynk not found" error**: Reinstall via Arduino Library Manager.  
- **WiFi connection issues**: Ensure ESP8266 core is ≥3.0.0.  

