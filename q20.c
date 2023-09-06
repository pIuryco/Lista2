#include <stdio.h>

int main(void) {
  int i, j,fatorial;
  
  for(int i = 1; i <= 10; i++){
      if(i % 2 != 0) {
         fatorial = 1;
  
        for(j = 1; j <= i; j++){
            fatorial *= j;
  
  }
  printf("Fatorial  de %d = %d\n",i, fatorial);
  }
  }
  
    return 0;
}