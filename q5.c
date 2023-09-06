#include <stdio.h>
#include <stdlib.h>

int main() {
    float n, maior, menor;

    printf("digite um numero ou 0 para encerrar\n ");
    scanf("%f", &n);

    if (n == 0) {
        return 0;
    }

    maior = menor = n;

    while (1) {
        printf("digite um numero ou 0 para encerrar\n ");
        scanf("%f", &n);

        if (n == 0) {
            break;
        }
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }
    }

    printf("O maior valor fornecido foi: %.2f\n", maior);
    printf("O menor valor fornecido foi: %.2f\n", menor);

    return 0;
}
