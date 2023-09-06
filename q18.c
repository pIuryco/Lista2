#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long somatorio = 0;

    for (int i = 1; i <= 64; i++) {
        unsigned long long noquadrado = pow(2, i - 1);
        somatorio += noquadrado;
    }

    printf("total de graos no tabuleiro: %llu\n", somatorio);

    return 0;
}
