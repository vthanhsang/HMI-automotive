# 🚗 HMI-Automotive

HMI-Automotive is an Automotive Human-Machine Interface (HMI) project developed using **Qt 5.12.2**. The system includes: 

- 🚘 **Cluster HMI** 
- 📺 **IVI (In-Vehicle Infotainment)**

The application communicates directly with an **ESP32** through **USB-UART Serial Communication** to receive sensor data and control external peripherals.

---

# 📌 Overview

This project simulates an automotive dashboard system and infotainment interface using **Qt** and **ESP32**. The system can: 

- Display real-time vehicle data 
- Monitor engine status 
- Show warning indicators 
- Control external devices through ESP32 
- Provide a modern HMI interface

---

# ✨ Features

### Cluster HMI

- Music selection interface 
- Send selected music to ESP32 
- Support 2 UI themes: 
    - Black Mode 
    - White Mode 
- Multi-language support: 
    - English 
    - Vietnamese

---

### IVI HMI

- Display battery information 
    - Battery percentage 
    - Charging status 
    - Discharging status 
- Display real-time sensor data from ESP32 
    - Vehicle speed 
    - Engine RPM 
    - Fuel level 
    - Engine temperature 
    - Display warning indicators 
    - Check Engine 
    - ABS Warning 
    - Oil Warning 
    - Engine Temperature Warning

---

### ESP32 Communication

- UART Serial Communication 
- Receive sensor data from ESP32 
- Send control commands to ESP32

---

# 🛠️ Technologies Used
| Technology | Description | 
|------------|-------------| 
| Qt 5.12.2  | GUI Framework | 
| C++        | Main Programming Language | 
| ESP32      | Embedded Controller | 
| UART       | Communication Protocol |

---
 
# 📷 Project Images 

## 🚘 Cluster HMI 

![Cluster](images/cluster.png) 

--- 

## 📺 IVI HMI 

![IVI](images/IVI.png) 

---

## 📺 PCB

![PCB](DesignPCB/PCB.pdf) 

---

# 🚀 Getting Started 

## Clone Repository

```bash

git clone https://github.com/your-username/HMI-Automotive.git

```

Open Project

   1. Open Qt Creator

   2. Open .pro file

   3. Configure Kit

   4. Build & Run

---

ESP32 Connection

   1. Connect ESP32 via USB

   2. Select COM Port

   3. Start UART Communication

---

# 👨‍💻 Author

Developed for learning and researching Automotive HMI systems using Qt and ESP32.