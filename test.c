#include <stdio.h>

int main(void) {
    unsigned char num = 0x20;
    num = num | 0x92;
    printf("0x%x", num);
    num = num | 0x10;
    printf("0x%x", num);

    return 0;
}
