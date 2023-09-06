#include <stdio.h>

int main() {
    int a, b, soma = 0;

    printf("escolha um intervalo de numeros ");
    scanf("%d %d", &a, &b);
  
     int denominador = 0;

    for (int i = a; i <= b; i++) {
        soma += i;
         denominador++;
    }

    float media = (float)soma / denominador;

    printf("Média aritmética dos números na faixa [%d, %d]: %.2f\n", a, b, media);

    return 0;
}
