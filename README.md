# 🏎️ CrazyCar — Autonomous Racing Car Prototype

<p align="center">
  **An autonomous miniature racing car in development for the Crazy Car Competition at FH JOANNEUM, Graz, Austria.**
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Status-In%20Development-orange?style=for-the-badge" alt="Project status: In Development">
  <img src="https://img.shields.io/badge/Focus-Robotics-blue?style=for-the-badge" alt="Robotics">
  <img src="https://img.shields.io/badge/CAD-KiCad-314CB0?style=for-the-badge" alt="KiCad">
</p>

---

## 📖 Table of Contents

- [Overview](#-overview)
- [Project Goals](#-project-goals)
- [Planned Hardware](#-planned-hardware)
- [Distance Sensing](#-distance-sensing)
- [Motor System](#-motor-system)
- [Autonomous Driving](#-autonomous-driving)
- [Repository Structure](#-repository-structure)
- [Opening the CAD Project](#-opening-the-cad-project)
- [Development Roadmap](#-development-roadmap)
- [Current Status](#-current-status)
- [Contributing](#-contributing)
- [License](#-license)

---

## 🚗 Overview

**CrazyCar** is an autonomous miniature racing car project developed for the Crazy Car Competition at **FH JOANNEUM in Graz, Austria**.

The goal is to build a compact, fast, and reliable self-driving car capable of navigating a track using onboard sensors and an autonomous control system.

The project covers the electronics, motor system, distance sensing, mechanical integration, and software required to develop a complete autonomous racing platform.

This repository currently contains the KiCad electronics design files. The overall vehicle layout and hardware integration are part of the ongoing development process.

> ⚠️ **Work in progress:** Hardware specifications, component selection, and implementation details may change as the prototype evolves. Planned features are not necessarily implemented or tested yet.

## 🎯 Project Goals

The main objectives are:

- 🧠 **Autonomous navigation** — make driving decisions based on sensor measurements.
- 📡 **Real-time distance measurement** — detect track boundaries and nearby walls.
- ⚡ **High-performance motor control** — achieve responsive acceleration and precise steering through differential motor control, if supported by the final mechanical design.
- 📏 **Compact construction** — fit the electronics, sensors, motors, and power system into a small racing platform.
- 🔧 **Custom electronics** — develop and document the vehicle's electronic hardware using KiCad.
- 🏁 **Competitive performance** — work toward consistent, fast, and repeatable laps.

## 🔩 Planned Hardware

The following components and design choices are planned or under consideration.

| Component | Planned solution | Purpose |
|---|---|---|
| Distance sensors | 5 × VL53L0X | Measure distances to track walls |
| Drive motors | High-power N20 geared motors or custom geared coreless motors | Propulsion |
| Electronics | Custom-designed PCB and associated circuitry | Integrate vehicle electronics |
| Control system | To be finalized | Process sensor data and control the motors |
| Power system | To be finalized | Supply the motors and electronics |
| Chassis | In development | Mount and protect the vehicle components |

**Important:** This table describes the intended design, not a verified bill of materials. Final component models, electrical ratings, and compatibility must be confirmed before assembly.

## 📡 Distance Sensing

The planned sensor arrangement uses **five VL53L0X time-of-flight distance sensors across the front of the vehicle**.

The sensors are intended to provide distance measurements to nearby walls, helping the control system estimate the car's position relative to the track boundaries.

Potential uses include:

- Detecting walls and approaching corners.
- Comparing distances on the left and right sides.
- Estimating alignment with a corridor.
- Adjusting the vehicle's trajectory while driving.
- Reducing collisions with track boundaries.

### Sensor integration considerations

Using multiple VL53L0X sensors requires careful hardware and software integration.

- **I²C addressing:** VL53L0X devices normally share the same default I²C address. Multiple sensors may require individual XSHUT control lines and sequential address configuration, or another suitable addressing arrangement.
- **Measurement timing:** Sensor readings must be collected quickly and consistently enough for the intended driving speed.
- **Field of view:** Sensor positioning and mounting angles influence which parts of the track can be detected.
- **Calibration:** Measurements may need filtering and calibration to improve reliability.

The final sensor arrangement and communication implementation remain subject to testing.

## ⚙️ Motor System

Two motor approaches are being considered:

1. **High-power N20 geared motors** from suppliers such as [JSUMO](https://www.jsumo.com/).
2. **Custom geared coreless motors** designed around the vehicle's size and performance requirements.

The final choice will depend on torque, rotational speed, gearing, current consumption, weight, and available space.

The motor system will need a compatible driver capable of handling the selected motors' operating and stall currents.

Planned development areas include:

- Responsive speed control.
- Reliable starting and stopping.
- Matching motor output to the vehicle's handling.
- Minimizing unnecessary weight and power losses.
- Integrating motor control with sensor-based navigation.

The final motor driver, control interface, gear ratio, and power requirements have not yet been finalized.

## 🧠 Autonomous Driving

The long-term goal is to develop an autonomous driving system that converts distance measurements into motor commands.

A potential control pipeline is:

1. **Measure:** Acquire distance readings from the front sensors.
2. **Interpret:** Estimate the car's position and orientation relative to nearby walls.
3. **Decide:** Determine the desired direction and speed.
4. **Control:** Convert the desired movement into motor commands.
5. **Repeat:** Continue updating the control output as new measurements arrive.

Possible future improvements include sensor filtering, adaptive speed control, corner detection, and control algorithms tuned for racing performance.

The exact control algorithm and software architecture will be documented as they are implemented and validated.

## 📂 Repository Structure

The repository currently contains the KiCad design files.

```text
CrazyCar_Prototype_-IN_DEVELOPMENT-/
├── README.md
├── carzycar.kicad_pro
├── carzycar.kicad_sch
├── carzycar.kicad_pcb
└── carzycar.kicad_prl
```

| File | Description |
|---|---|
| `README.md` | Project overview and documentation |
| `carzycar.kicad_pro` | KiCad project configuration |
| `carzycar.kicad_sch` | Electrical schematic |
| `carzycar.kicad_pcb` | PCB layout |
| `carzycar.kicad_prl` | Local KiCad project settings |

The filenames are retained as they currently exist in the repository.

As development progresses, additional directories may be introduced for embedded firmware, control software, mechanical CAD, testing tools, and technical documentation.

## 🛠️ Opening the CAD Project

The electronics design is developed with KiCad.

### Requirements

- [KiCad](https://www.kicad.org/) installed on your computer.
- A local clone or download of this repository.

### Clone the repository

```bash
git clone https://github.com/Matei2010/CrazyCar_Prototype_-IN_DEVELOPMENT-.git
```

Open `carzycar.kicad_pro` in KiCad to access the project.

From the project, open the schematic to inspect the electrical connections and the PCB editor to inspect the board layout.

Before manufacturing a PCB, verify the schematic, footprints, electrical rules, board dimensions, clearances, connector placement, and compatibility with the selected components.

**Note:** The current repository is primarily a CAD project. A complete firmware build or vehicle operating procedure is not documented here because the corresponding implementation and final hardware configuration have not yet been established.

## 🗺️ Development Roadmap

The following roadmap describes intended development work. It does not imply that each item is already complete.

- [x] Create a public GitHub repository.
- [x] Add the initial KiCad project, schematic, and PCB files.
- [ ] Finalize the vehicle's physical layout.
- [ ] Confirm the sensor, motor, and controller selections.
- [ ] Complete the electronics design and review the PCB.
- [ ] Manufacture and assemble the electronics.
- [ ] Integrate the five planned distance sensors.
- [ ] Integrate the motor driver and drive system.
- [ ] Implement sensor acquisition and motor control.
- [ ] Test basic movement and distance measurements.
- [ ] Implement and tune autonomous navigation.
- [ ] Conduct track testing and optimize lap consistency.
- [ ] Document the final hardware, software, and assembly process.

Progress will be updated as individual milestones are completed.

## 📊 Current Status

**Development stage: Early prototype / electronics design.**

The repository provides the initial KiCad design files for the project. The complete autonomous vehicle, final component configuration, and driving software are still under development.

This project is intended to evolve through iterative design, assembly, testing, and optimization.

## 🤝 Contributing

Suggestions, technical feedback, and improvement ideas are welcome.

If you want to contribute:

1. Review the existing design and project goals.
2. Describe the proposed improvement or report an issue.
3. Include relevant technical details, measurements, or reproducible test results.
4. For substantial changes, discuss the proposal before modifying the design.

Changes to electrical hardware should be checked for voltage compatibility, current limits, thermal behavior, and physical constraints before implementation.

## 📄 License

No license has been specified in this README. Check the repository for a `LICENSE` file before reusing, modifying, or distributing the project's files.

If you intend to publish the design as open source, consider adding an appropriate license for the hardware and any future software components.

---

<p align="center">
  **Built for autonomous racing. Designed through experimentation.**
</p>

<p align="center">
  <a href="https://github.com/Matei2010/CrazyCar_Prototype_-IN_DEVELOPMENT-">View the project on GitHub</a>
</p>
