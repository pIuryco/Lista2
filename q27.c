#include <stdio.h>
#include <stdlib.h>

int main() {
    float maior, menor;
    int n;

    printf("digite um numero negativo e par para encerrar\n ");
    scanf("%d", &n);

    if (n < 0 && n % 2 == 0) {
        return 0;
    }

    maior = menor = n;

    while (1) {
        printf("digite um numero negativo e par para encerrar\n ");
        scanf("%d", &n);

        if (n < 0 && n % 2 == 0) {
            break;
        }
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }
    }

    printf("multiplicaçao do maior pelo menor: %.2f\n", maior* menor);
    
    return 0;
}
