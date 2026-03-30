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
