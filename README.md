# MCU Temp Simulation

This repository contains files and code for simulating a microcontroller (MCU) temperature system, likely targeting Arduino Uno hardware. It includes source code, build artifacts, configuration files, and simulation diagrams.
## Structure
- `sample/` - Main source folder
  - `sample.ino` - Arduino sketch for the temperature simulation
  - `build/arduino.avr.uno/` - Compiled output files for Arduino Uno
    - `.eep`, `.elf`, `.hex`, `.with_bootloader.bin`, `.with_bootloader.hex` - Various build artifacts
- `diagram.json` - Simulation diagram (possibly for Wokwi)
- `wokwi.toml` - Wokwi simulation configuration
- `wokwi_sample-main.zip` - Zipped sample project
- `wokwi_sample-main/` - Unzipped sample project

## Usage

1. Open the `sample/sample.ino` file in the Arduino IDE or compatible editor.
2. Build the project to generate output files in `sample/build/arduino.avr.uno/`.
3. Use Wokwi (https://wokwi.com/) for simulation:
   - Import `diagram.json` and `wokwi.toml` for the simulation setup.
   - Optionally use files in `wokwi_sample-main/` for additional examples.

## Requirements
- Arduino IDE or PlatformIO
- Wokwi online simulator (optional)

## License
Specify your license here (e.g., MIT, GPL, etc.).