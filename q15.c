#include <stdio.h>
#include <math.h>

int main() {
int expoente;
for (expoente = 0; expoente <= 7; expoente++) {
        float resultado = pow(3.0, expoente);
        printf("3^%d = %.0f\n", expoente, resultado);
    }
  
  return 0;
}