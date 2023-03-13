# Jet-Code
Code for an RC Jet

#Install Arduino Extension:
1. Click on extensions
2. Search for "Arduino"
3. Install

#Install Arduino-cli:
"brew update"
"install arduino-cli"

#Run these commands in vscode terminal to install correct boards:
"arduino-cli core install arduino:mbed"
"arduino-cli board listall"
Look for: "Arduino Portenta H7 (M7 core)       arduino:mbed:envie_m7"

#Add Libraries:
"arduino-cli lib search debouncer"

#Compile Sketch:
"arduino-cli compile --fqbn arduino:mbed:envie_m7 {Sketch_Name}"

#Upload Sketch:
"arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:mbed:envie_m7 {Sketch_Name}"
