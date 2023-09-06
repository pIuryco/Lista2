#include <stdio.h>
#include <math.h>
int main(void) {
  int a,b,c;
  printf("Escolha um intervalo de numeros\n");
  scanf("%d %d", &a, &b);
  if(a > b)
  a = a^b;
  b = a^b;
  a = a^b;
  
  printf("Quadrado dos multiplos de 4 entre %d e %d\n ",a,b);
  for(int i = a; i <= b; i++){
    if(i % 4 == 0) {
      printf("%.0f, ",pow(i,2));
    }
  }
  return 0;
}