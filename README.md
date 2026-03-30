# ESP32-Robotic-RC-Car
An IoT based RC car controlled over WiFi using ESP32. This project demonstrates wireless control, motor driver integration, and real-time communication using mobile apps like Blynk.
# ESP32 WiFi RC Car 🚗

## 📌 Project Overview
This project is a WiFi controlled robotic car built using ESP32. The car can be controlled using a mobile app over WiFi.
## 🔌 Circuit Diagram

![Circuit-DIAGRAM](images/circuit%20DIAGRAM.png)


🧰 Components Required

ESP32 Development Board

L298N Motor Driver

DC Motors

Robot Chassis

Battery (7.4V / 12V recommended)

Jumper Wires



⚙️ Understanding the Motor Driver (L298N)

The L298N motor driver is used to control the direction and movement of DC motors.

🔹 Key Functions:

Controls motor direction (forward/backward)

Allows two motors to run independently

Acts as an interface between ESP32 and motors




🔌 Pin Configuration



🔹 ESP32 to L298N Connections:

L298N Pin	ESP32 Pin

IN1	----26

IN2 ----27

IN3	----14

IN4	----12


⚡ Power Connections

Battery Positive → L298N 12V

Battery Negative → L298N GND

L298N GND → ESP32 GND (Common Ground)



👉 Optional:


L298N 5V → ESP32 VIN (only if stable power available)



🔩 Motor Connections

Motor A → OUT1 & OUT2

Motor B → OUT3 & OUT4



🧱 Hardware Assembly Steps

Fix motors to the robot chassis

Mount the wheels properly

Place the ESP32 securely on chassis

Connect motors to L298N

Connect ESP32 pins to L298N

Connect battery to motor driver

Ensure all wires are tight and secure



🧠 Important Concepts

🔹 Common Ground

All components must share the same ground for proper signal flow.


🔹 Power Separation

Motors use higher power; ESP32 uses low voltage — improper connection can damage the board.



⚠️ Safety Precautions

Do not connect battery directly to ESP32 3.3V pin

Double-check wiring before powering ON

Avoid loose connections

Ensure correct polarity of battery


## ⚙️ Features
- WiFi control
- Real-time movement
- Easy to build

  
## 📲 How it works
ESP32 connects to WiFi and receives commands from mobile app (Blynk), then controls motors accordingly.


## 🚀 Future Improvements
- Add camera
- Voice control





Bhai 🔥 ab main isko **next-level GitHub README** bana deta hoon — badges + clean look + thoda premium feel (without changing your words).

---

# 🚗 ESP32 WiFi RC Car

![ESP32](https://img.shields.io/badge/ESP32-IoT-blue?style=for-the-badge\&logo=espressif)
![Blynk](https://img.shields.io/badge/Blynk-App-green?style=for-the-badge\&logo=android)
![Project](https://img.shields.io/badge/Project-RC%20Car-orange?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Working-success?style=for-the-badge)

---

## 📌 Project Overview

This project is a WiFi controlled robotic car built using ESP32.
The car can be controlled using a mobile app over WiFi.

---

## 🔌 Circuit Diagram

![Circuit-DIAGRAM](images/circuit%20DIAGRAM.png)

---

## 🧰 Components Required

* ESP32 Development Board
* L298N Motor Driver
* DC Motors
* Robot Chassis
* Battery (7.4V / 12V recommended)
* Jumper Wires

---

## ⚙️ Understanding the Motor Driver (L298N)

The L298N motor driver is used to control the direction and movement of DC motors.

### 🔹 Key Functions:

* Controls motor direction (forward/backward)
* Allows two motors to run independently
* Acts as an interface between ESP32 and motors

---

## 🔌 Pin Configuration

### 🔹 ESP32 to L298N Connections:

| L298N Pin | ESP32 Pin |
| --------- | --------- |
| IN1       | 26        |
| IN2       | 27        |
| IN3       | 14        |
| IN4       | 12        |

---

## ⚡ Power Connections

* Battery Positive → L298N 12V
* Battery Negative → L298N GND
* L298N GND → ESP32 GND (Common Ground)

👉 **Optional:**

* L298N 5V → ESP32 VIN (only if stable power available)

---

## 🔩 Motor Connections

* Motor A → OUT1 & OUT2
* Motor B → OUT3 & OUT4

---

## 🧱 Hardware Assembly Steps

1. Fix motors to the robot chassis
2. Mount the wheels properly
3. Place the ESP32 securely on chassis
4. Connect motors to L298N
5. Connect ESP32 pins to L298N
6. Connect battery to motor driver
7. Ensure all wires are tight and secure

---

## 🧠 Important Concepts

### 🔹 Common Ground

All components must share the same ground for proper signal flow.

### 🔹 Power Separation

Motors use higher power; ESP32 uses low voltage — improper connection can damage the board.

---

## ⚠️ Safety Precautions

* Do not connect battery directly to ESP32 3.3V pin
* Double-check wiring before powering ON
* Avoid loose connections
* Ensure correct polarity of battery

---

## ⚙️ Features

* WiFi control
* Real-time movement
* Easy to build

---

## 📲 How it works

ESP32 connects to WiFi and receives commands from mobile app (Blynk), then controls motors accordingly.

---

## 🚀 Future Improvements

* Add camera
* Voice control

---

💡 **Extra Upgrade Idea (optional):**
Agar tu aur next level banana chahta hai to add kar:

* 📸 Project Images (`images/car.jpg`)
* 🎥 Demo Video (YouTube link)
* 📱 Blynk UI Screenshot

---

Agar bole to main **GitHub repo ka full structure + images folder + demo layout bhi bana deta hoon** — pura professional project ban jayega 😎

