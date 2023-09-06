#include <stdio.h>

int main(void) {
  int somatorio3, somatorio5;
  for(int i = 0; i <= 200; i++){
    if((i % 3 == 0) && i <= 100){
      somatorio3 += i;
    }
    if((i % 5 == 0) && i >= 100){
      somatorio5 += i;
    }
  }
  printf("somatorio dos divisiveis por 3 no intervalo (0,100): %d", somatorio3);
  printf("somatorio dos divisiveis por 5 no intervalo (100,200): %d", somatorio5);
  return 0;
}