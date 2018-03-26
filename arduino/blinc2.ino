const int8_t LED_PIN = 13; // 13 pin used to blink with a LED


void setup() {
    // putnyour setup code here, to run once:
    // pins assignment
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(LED_PIN, HIGH);
    millis(1000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
}
