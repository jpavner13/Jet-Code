# Jet-Code
Code for an RC Jet

Install Arduino Extension:
  1. Click on extensions
  2. Search for "Arduino"
  3. Install

Install Arduino-cli:
  1. "brew update"
  2. "install arduino-cli"

Run these commands in vscode terminal to install correct boards:
  1. "arduino-cli core install arduino:mbed"
  2. "arduino-cli board listall"
  3. Look for: "Arduino Portenta H7 (M7 core)       arduino:mbed:envie_m7"

Add Libraries:
  - Adafruit MPU6050
  - Adafruit_BMP3XX
  - Run "arduino-cli lib list" to check instilation

Compile Sketch:
  - "arduino-cli compile --fqbn arduino:mbed:envie_m7 {Sketch_Name}"

Upload Sketch:
  - "arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:mbed:envie_m7 {Sketch_Name}"
