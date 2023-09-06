#include <stdio.h>

int main(void) {
  int f, fatorial = 1;
  puts("Escolha um valor para fazer o fatorial");
  scanf("%d", &f);
  for(int i = f; i >= 1; i--){
  fatorial *= i;
  }
  printf("Fatorial = %d", fatorial);
    return 0;
}