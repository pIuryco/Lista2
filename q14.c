#include <stdio.h>

int main() {
    int a, b, div;

    printf("escolhe um intervalo de numeros\n");
    scanf("%d %d",&a, &b);
    
if (a > b) {
    a = a^b;
    b = a^b;
    a = a^b;  
    }
     for (int i = a; i <= b; i++) {
        if (i % 3 == 0) {
            div++;
        }
    }

    printf("quantidade de numeros divisiveis por 3 no intervalo (%d, %d): %d", a, b, div);
    return 0;
}
