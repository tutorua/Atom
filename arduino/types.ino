void setup() {
    // Arduino use the C like language called AVR
    // standard types
    char -128 .. 127 // can b used to keep  short integer
    bool
    int -32768 .. 32767
    unsigned int 0 .. 65535
    long int -2^31 .. 2^31 - 1
    unsigned long int 0 .. 2^32 - 1
    short int in AVR as int
    char 'a'
    unsigned char 0 .. 255
    float // 4 bytes, not recommended

    // the above may be slightly different for controlllers:
    // AVR mega - 8kB; 8bit
    // ESP8266 - 80 kb; 32 bit (int equivalent to long int)
    // synonyms allows to avoid the differences of AVR and ESP
    int8_t
    uint8_t
    int16_t
    int32_t
    uint32_t

    // variables
    uint16_t i, j, k;
    // constants e.g. for pin assignment
    #define DT 1000; // substitutes DT in code for the value
    // the better way:
    const int16_t DT = 1000; // millisecond to delay
    const uint8_t LED_PIN = 13; 

}

void loop() {
    // put your main code here, to run repeatedly:

}
