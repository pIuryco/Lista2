#include <stdio.h>

int main(void) {
  int a, unidade, dezena, milhar, centmilhar;
  puts("digite um inteiro de 5 digitos");
  scanf("%d", &a);

  centmilhar = a / 10000;
  milhar = (a % 10000) / 1000;
  dezena = (a % 100) / 10; 
  unidade = a % 10;

  if(centmilhar == unidade && milhar == dezena) {
    puts("esse numero é um palindromo");
  } else {
    puts("esse numero nao é um palindromo");
  }
    return 0;
}