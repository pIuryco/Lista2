#include <stdio.h>

int main(void) {
  
  for(int i = 10; i <= 100; i+=10){
  float fahrenheit = (1.8*i) + 32;
  printf("%dº Celsius = %.2fº Fahrenheit\n", i, fahrenheit);
  }
  return 0;
}