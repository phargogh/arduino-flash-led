/*
Based on the arduino blink sample.

NOTES:
  * Need to use the following settings in the arduino IDE:
      * Board: Arduino Nano
      * Processor: ATMega 328P (Old Bootloader)
*/

void setup() {
    // initialize the digital pin LED_BUILTIN as an output
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH); // turn the LED on, HIGH voltage
    delay(100); // wait a second
    digitalWrite(LED_BUILTIN, LOW);  // turn LED off with a low voltage.
    delay(100);
}
