include <stdio.h>

int main() {
    double pi = 0.0;
    int operacao = 1;

    printf("numero de termos\tvalor aproximado de pi\n");

    for (int i = 1; i <= 20; i++) {
        double termo = 4.0 / (2 * i - 1);
        if (operacao % 2 == 0) {
            pi -= termo;
        } else {
            pi += termo;
        }
        operacao++;
        printf("%d\t\t\t\t\t%.15lf\n", i, pi);
    }
    return 0;
}
