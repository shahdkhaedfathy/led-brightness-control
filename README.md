# Arduino LED Analog Control using Pushbuttons

This project is similar to the sound volume control on a mobile device, where the user can increase or decrease the volume using the volume buttons on the device. In this project, the user can increase or decrease the brightness of the LED using the pushbuttons. The pushbuttons act as a control interface for adjusting the brightness level of the LED, similar to how the volume buttons act as a control interface for adjusting the volume level on a mobile device.

## Equipment Required

- Arduino board
- Breadboard
- One LED
- Two 10kΩ resistors
- Two pushbuttons
- Jumper wires

## Instructions

1. Connect the LED to the breadboard and connect the anode (positive leg) to digital pin 9 on the Arduino board.
2. Connect two 10kΩ resistors to the breadboard and connect one end of each resistor to ground.
3. Connect one pushbutton to the breadboard and connect one leg to the same row as one of the resistors. Connect the other leg to digital pin 10 on the Arduino board.
4. Connect the other pushbutton to the breadboard and connect one leg to the same row as the other resistor. Connect the other leg to digital pin 11 on the Arduino board.
5. Connect the cathode (negative leg) of the LED to ground.
6. Connect the Arduino board to your computer using a USB cable.
7. Open the Arduino IDE and upload the code.
8. Press the first pushbutton to increase the brightness level of the LED.
9. Press the second pushbutton to decrease the brightness level of the LED.

## License

This project is licensed under the [MIT License](LICENSE).
