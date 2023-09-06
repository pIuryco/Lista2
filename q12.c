#include <stdio.h>

int main() {
    int num;

    printf("digite um numero inteiro para a tabuada: ");
    scanf("%d", &num);

    printf("tabuada do %d:\n", num);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
