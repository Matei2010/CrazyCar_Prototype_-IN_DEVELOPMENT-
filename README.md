CrazyCar

This is my project for the Crazy Car Competition at FH JOANNEUM in Graz.

The goal is to design and build a small autonomous racing car. The car is supposed to drive around a track on its own using distance sensors and a custom control system.

Hardware

The current design includes five VL53L0X time-of-flight distance sensors at the front of the car. Since these sensors use the same I2C address, an I2C multiplexer is included in the design.

For the motors, I am planning to use RZ7889 motor drivers. The motors are not fully decided yet. Possible options are high-power N20 geared motors or custom geared coreless motors.

The car is also planned to have a centrifugal fan underneath it to create suction and increase grip.

PCB

The schematic and PCB layout were designed in KiCad. The current design is waiting for approval.

No PCB has been manufactured yet, and no hardware has been assembled or tested. Some component choices and parts of the design may still change.

Repository

This repository contains the KiCad project files, including the schematic and PCB layout.

The project is still in the design phase, so things may change as development continues.
