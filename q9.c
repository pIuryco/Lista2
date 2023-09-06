#include <stdio.h>

int main() {
  int a = 0 , b= 1, somatorio = 0;

  for(int i = 0; i < 20; i++){
    if(i <= 1){
      somatorio = i;
    } else {  
    somatorio = a + b;
    a = b;
    b = somatorio;
    }
  printf("%d, ", somatorio);
  
  }
  return 0;
}