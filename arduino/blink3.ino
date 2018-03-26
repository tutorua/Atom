/* Blink without Delay
compilation
 */
const int8_t LED_PIN = 13; // 13 pin used to blink with a LED

uint32_t prevMillis = 0;
uint32_t period = 1000; // elapsed time - blinking period in milliseconds
uint32_t currMillis;

void setup() {
    pinMode(LED_PIN, OUTPUT); // setup the pin mode for the LED
}

void loop() {
    currMillis = millis();
    if (currMillis - prevMillis > period) {
        prevMillis = currMillis; // save the new value for start Time
        digitalWrite(LED_PIN, ! digitalRead(LED_PIN)); // change the LED state
    }
    // execute something useful without delay

}
