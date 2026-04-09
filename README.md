# 6-DOF Robotic Arm using Arduino
## Overview

This project presents a 6 Degrees of Freedom (6-DOF) Robotic Arm built using an Arduino Uno and servo motors to achieve precise multi-joint motion control. The system is capable of performing pick-and-place operations and can be controlled in real-time via a PC using UART communication.

## Key Features
 * Independent control of 6 joints (6-DOF)
 * Smooth and precise motion using PWM-based servo control
 * UART (Serial) communication for real-time control from PC
 * Position Save & Playback functionality
 * Reset and coordinated motion support
 * GUI-based control interface
 * 
## Components Used
# Component	                              Description
* Arduino Uno	                        Main microcontroller
* MG996R Servo Motors	                High torque (base, arm and shoulder joints)
* SG90 Servo Motors	                  Roll,pitch and gripper control
* External Power Supply	              5–6V for stable servo operation
* Jumper Wires	                      Connections
  
## System Architecture
* Arduino generates PWM signals to control servo angles
* Each servo corresponds to one joint of the robotic arm
* Commands are sent from PC via UART (Serial Communication)
* Arduino parses commands and moves the respective servo
  
## Circuit Connections
* Servo signal pins → Arduino Pins 2 to 8
* External 5–6V supply → Servo VCC
* Common GND shared between Arduino and power supply
  
## How to Run
* Upload the Arduino code to Arduino Uno
* Connect servos to pins 2–8
* Provide external 5–6V power supply
* Open Serial Monitor (9600 baud rate)
* Send commands in format:
* servoIndex:angle
* Example: 1:90

 Moves servo 1 to 90°

## Code Explanation

Uses Arduino Servo.h library
Each servo is mapped to a specific pin
Serial input is read and parsed
Format: servoIndex:angle
Switch-case logic controls individual servos
Includes mirror logic for synchronized movement (if applicable)

## Software Control Interface (GUI)
A PC-based GUI is used for advanced control.

## Features:
* Real-time joint control using sliders
* Save & playback motion sequences
* Reset and stop functionality
* Import/export motion paths

## 📸 Project Demo

### Robotic Arm
![Robotic Arm](images/robotic_arm.jpeg)

### Circuit Diagram
![Circuit Diagram](images/circuit_diagram.jpeg)

### Software Interface
![Software Interface](images/software_interface.jpeg)

# Applications
* Pick-and-place automation
* Industrial automation concepts
* Robotics learning and prototyping
* Research and embedded systems practice
  
# Future Improvements
Add inverse kinematics for intelligent movement
Integrate computer vision (ESP32-CAM / OpenCV)
Wireless control using WiFi/Bluetooth
Upgrade to ROS (Robot Operating System)

# Contact
Naga Rohit Anudeep N
📧 Open to opportunities in Embedded Systems & Robotics

 Support
If you like this project:
    Star the repository
    Fork and improve
    Contribute

# Conclusion
This project demonstrates practical implementation of embedded systems, robotics, and real-time control, making it a strong addition to portfolios targeting core electronics and embedded roles.
