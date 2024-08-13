const unsigned char segPatterns[] = {
    0x3F,
    0x06,
    0x5B,
    0x4F,
    0x66,
    0x6D,
    0x7D,
    0x07,
    0x7F,
    0x6F
};
void main() {
    unsigned char count = 0;

    TRISB = 0x00;
    PORTB = 0x00;

    while (1) {

        PORTB = segPatterns[count];
        count++;
        if (count > 9) {
            count = 0;
  }
Delay_ms(1000);
    }
}
