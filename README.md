CrazyCar

This is my project for the Crazy Car Competition at FH JOANNEUM in Graz.

The goal is to design and build a small autonomous racing car. The car is supposed to drive around a track on its own using distance sensors and a custom control system.

I made it because i want to win at the Crazy car competition and beacuse i love it to design complicated PCBs.

Full Assembly:

<img width="601" height="716" alt="image" src="https://github.com/user-attachments/assets/8a919f41-4657-4bd5-854b-9d6c61e813d7" />

<img width="615" height="509" alt="image" src="https://github.com/user-attachments/assets/f667dabf-061c-428e-81fe-90e22cfd4a59" />

<img width="1016" height="494" alt="image" src="https://github.com/user-attachments/assets/d11d4e14-f0ae-4c11-94ed-e40ab31c4019" />



Hardware

The current design includes five VL53L0X time-of-flight distance sensors at the front of the car. Since these sensors use the same I2C address, an I2C multiplexer is included in the design.

For the motors, I am planning to use RZ7889 motor drivers in combination with TMCS1100A3QDR current sensing. The motors are not fully decided yet. Possible options are high-power N20 geared motors or custom geared coreless motors.At the moment i am leaning more towards n20 Motors.

The car is also planned to have a centrifugal fan underneath it to create suction and increase grip. It will generate about 1-1.5 Kg of downforce on the car. 


PCB

The schematic and PCB layout were designed in KiCad. The current design is waiting for approval from my teacher, since this is my first actual complicated PCB, i like to be sure bevore I waiste money on it.

No PCB has been manufactured yet, and no hardware has been assembled or tested. Some component choices and parts of the design may still change.

Front copper:<img width="772" height="848" alt="image" src="https://github.com/user-attachments/assets/c5560d25-a898-46f2-8d61-dfda912b90eb" />

Back Copper:<img width="835" height="834" alt="image" src="https://github.com/user-attachments/assets/9f960a12-4d7c-4858-b45d-13bfd22bf6b7" />

3D_Model:<img width="835" height="905" alt="image" src="https://github.com/user-attachments/assets/f72cee74-0a09-4e82-99b1-26d4261b97a7" />

Schematic:<img width="790" height="635" alt="image" src="https://github.com/user-attachments/assets/e51b72aa-a14e-4b8b-9f49-85ab6f9c7357" />

Repository

This repository contains the KiCad project files, including the schematic and PCB layout.

The project is still in the design phase, so things may change as development continues.
