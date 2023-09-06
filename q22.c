#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char a[20];
    int qtd = 0;

    printf("digite um número inteiro\n ");
    scanf("%s", a);

    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == '7') {
            qtd++;
        }
    }

    printf("O número de dígitos 7 no inteiro é: %d\n", qtd);

    return 0;
}
