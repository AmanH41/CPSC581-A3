#include <Servo.h>

Servo servo;
const int servoPin = 9;

// Ultrasonic Sensor Pins
const int trigPin1 = 7;
const int echoPin1 = 10;
const int trigPin2 = 8;
const int echoPin2 = 11;

const int stopDistance = 15; // Distance in cm to stop the motor
const int slowSpeed = 91;   // Adjust this value for slower speed (closer to 90)

long getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  long distance = (duration * 0.034) / 2; // Convert to cm
  return distance;
}

void setup() {
  servo.attach(servoPin);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);

  Serial.begin(9600); // Start serial communication
  servo.write(slowSpeed); // Start motor rotation at slow speed
}

void loop() {
  long distance1 = getDistance(trigPin1, echoPin1);
  long distance2 = getDistance(trigPin2, echoPin2);

  if (distance1 <= stopDistance || distance2 <= stopDistance) {
    servo.detach(); // Stop sending signals to the motor
    Serial.println("STOP"); // Send STOP signal to computer
  } else {
    if (!servo.attached()) {
      servo.attach(servoPin); // Reattach servo if it was detached
    }
    servo.write(slowSpeed); // Continue rotating at slow speed
    Serial.println("PLAY"); // Send PLAY signal to computer
  }
  delay(500); // Small delay to prevent rapid switching
}
