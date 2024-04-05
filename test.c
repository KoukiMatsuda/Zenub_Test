#include <stdio.h>

int main(void) {
    unsigned char num = 0x49;
    num = num | 0x92;
    printf("0x%x", num);

    return 0;
}
