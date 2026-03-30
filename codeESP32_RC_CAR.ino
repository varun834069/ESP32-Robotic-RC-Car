#define BLYNK_TEMPLATE_ID "YourTemplateID"
#define BLYNK_TEMPLATE_NAME "WiFi Robot"
#define BLYNK_AUTH_TOKEN "YourAuthToken"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "YourWiFiName";
char pass[] = "YourPassword";

// Motor Pins
int IN1 = 26;
int IN2 = 27;
int IN3 = 14;
int IN4 = 12;

// Movement Functions
void stopRobot() {
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
}

void forward() {
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
}

void backward() {
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
}

void left() {
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
}

void right() {
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
}

// Blynk Controls
BLYNK_WRITE(V0) {
if (param.asInt() == 1) forward();
else stopRobot();
}

BLYNK_WRITE(V1) {
if (param.asInt() == 1) backward();
else stopRobot();
}

BLYNK_WRITE(V2) {
if (param.asInt() == 1) left();
else stopRobot();
}

BLYNK_WRITE(V3) {
if (param.asInt() == 1) right();
else stopRobot();
}

void setup() {
Serial.begin(9600);

pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);

stopRobot();

Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
Blynk.run();
}