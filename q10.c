#include <stdio.h>
#include <math.h>
int main(void) {
  printf("Quadrado dos multiplos de 4 entre 15 e 90\n ");
  for(int i = 15; i <= 90; i++){
    if(i % 4 == 0) {
      printf("%.0f, ",pow(i,2));
    }
  }
  return 0;
}