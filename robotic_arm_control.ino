#include <Servo.h>

// Declare servo objects
Servo servo_0; // Servo 1
Servo servo_1; // Servo 2
Servo servo_2; // Servo 3
Servo servo_3; // Servo 4
Servo servo_4; // Servo 5
Servo servo_5; // Servo 6
Servo servo_6; // Additional servo (mirrored movement)

void setup() {
  Serial.begin(9600); // Initialize serial communication

  // Attach servos to pins
  servo_0.attach(2);
  servo_1.attach(3);
  servo_2.attach(4);
  servo_3.attach(5);
  servo_4.attach(6);
  servo_5.attach(7);
  servo_6.attach(8);
}

void loop() {
  // Check if serial data is available
  if (Serial.available() > 0) {
    
    // Read input until newline
    String input = Serial.readStringUntil('\n');
    
    // Extract servo index and value
    int servoIndex = input.substring(0, 1).toInt();
    int servoValue = input.substring(2).toInt();

    // Control servos based on index
    switch (servoIndex) {
      case 1:
        servo_0.write(servoValue);
        break;

      case 2:
        servo_1.write(servoValue);
        break;

      case 3:
        servo_2.write(servoValue);
        break;

      case 4:
        servo_3.write(servoValue);
        break;

      case 5:
        servo_4.write(servoValue);
        servo_6.write(180 - servoValue); // Mirror movement
        break;

      case 6:
        servo_5.write(servoValue);
        break;

      default:
        // Invalid servo index
        break;
    }
  }
}
