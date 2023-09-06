#include <stdio.h>

int main(void) {
  int jose = 150, pedro = 110, anos = 1;
  
  for(int i = 1; jose > pedro; i++) {
    jose += 2;
    pedro += 3;
    anos++;
  }
  printf("Pedro sera maior que jose em %d anos", anos);
  return 0;
}