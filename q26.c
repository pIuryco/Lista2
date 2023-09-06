#include <stdio.h>

int main() {
    for (int decimal = 1; decimal <= 256; decimal++) {
        printf("%d\t", decimal);

        int temp = decimal;
        for (int i = 7; i >= 0; i--) {
            long int bit = (temp >> i) & 1;
            printf("%ld", bit);
        }
        printf("\t");
        printf("%o\t", decimal);
        printf("%X\n", decimal);
    }
    return 0;
}
