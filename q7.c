#include <stdio.h>

int main(void) {
int a,b;

  printf("escolha um valor para a\n");
  scanf("%d", &a);
  while(1){
  printf("escolha um valor para b\n");
  scanf("%d", &b);
    if(b != 0)
      break;
    puts("O denominador nao pode ser nulo\n");
  }
  printf("Valor de a/b : %.2f", (float)a/b);
  return 0;
}