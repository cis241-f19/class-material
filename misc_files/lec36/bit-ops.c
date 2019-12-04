#include <stdio.h>

int main(void) {
    unsigned short a = 0b1010010011110000;
    unsigned short b = 0b01111001;
    unsigned short res = a >> 8;
    printf("%04x\n", res);
    printf("%04x\n", b);
    return 0;
}

