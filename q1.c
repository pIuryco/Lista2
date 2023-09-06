#include <stdio.h>

int main(void) {
  int dia = 0;
  
  do {
    printf("Insira um numero de 1 a 7 ou 0 para encerrar\n");
    scanf("%d", &dia);
    if(dia == 0){
      puts("programa encerrado");
      break;
    }
    switch(dia) {
      case 1: printf("1 = Domingo\n");
      break;
      case 2: printf("2 = Segunda-feira\n");
      break;
      case 3: printf("3 = Terça-feira\n");
      break;
      case 4: printf("4 = Quarta-feira\n");
      break;
      case 5: printf("5 = Quinta-feira\n");
      break;
      case 6: printf("6 = Sexta-feira\n");
      break;
      case 7: printf("7 = Sábado\n");
      break;
      default: printf("Número de dia nao valido\n");
      break;
  }
  }while(dia > 1);
  
      
    

  return 0;
}