 LifeLine AI Scanner 🩺

An Arduino-based prototype designed to simulate a medical information scanner and display essential patient information.
 💡 Project Overview

LifeLine AI Scanner is a prototype that demonstrates how a simple electronic system can provide quick access to important medical information.

When the user presses the button, the system simulates a QR scanning process and displays predefined medical information on an LCD screen.

 ⚙️ Components Used
 Arduino Uno
 16x2 LCD Display with I2C module
 Push Button
 Buzzer
 Connecting Wires

 Features

* Displays a welcome message when powered on.
* Simulates a QR scanning process when the button is pressed.
* Produces three short audio signals.
* Displays predefined medical information:

  * Blood Type
  * Allergies
  * Medical Condition
  * Medication

 💻 Technologies Used

* Arduino C++
* Arduino IDE
* LiquidCrystal_I2C Library

 🔄 How It Works

1. The LCD displays "Scanner Ready".
2. The user presses the button.
3. The LCD displays "Scanning QR...".
4. The buzzer produces three short beeps.
5. The LCD displays the predefined medical information.
6. The system returns to the ready screen.

 ⚠️ Current Limitations

This version simulates the QR scanning process. It does not include a physical QR code reader or actual QR decoding functionality. The displayed medical information is predefined in the Arduino code.

 📌 Project Status

Prototype – Basic functionality implemented and simulated using Arduino.

