// pins assignment
const int8_t LED_PIN = 13; // 13 pin used to blink with a LED
int8_t a = 1;

void setup() {
    // putnyour setup code here, to run once:
    Serial.begin(115200);
    printVars();


}

void loop() { }

void printVars() {
    int8_t a = 2; // the local var will be used

    Serial.println(a); // outputs 2
    { // the block used to demonstrate
        int8_t a = 3; // the local var will be used

        Serial.println(a); // // outputs 3
        Serial.println(::a); // :: - global - outputs 1
    }
    Serial.println(::a); // :: - global - outputs 1
}
