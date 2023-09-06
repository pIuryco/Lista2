#include <stdio.h>

int main(void) {
  int paulo = 0, renata = 0, nulo = 0, branco = 0, voto, votos = 0;
  char confirma;
puts("Paulo - 5");
puts("Renata - 7");
puts("Branco - 0");
puts("Nulo - Qualquer outro valor");
 while(1){
 puts("EM QUEM VOCE DESEJA VOTAR?"); 
 scanf("%d", &voto);
 if(voto < 0)
     break;
 puts("Deseja confirmar o voto?");
 puts("s para SIM\nn para NAO");
 scanf(" %c", &confirma);
   if(confirma == 's') {
     if(voto == 5) {
       paulo++;
     } else { 
      if(voto == 7) {
       renata++;
     } else {
     if(voto == 0) {
       branco++;
     }
     else
       nulo++;
     }
     } 
     }
   votos++;
 }
  printf("Porcentagem de votos de Paulo : %.2f\n", ((float)paulo*100)/votos);
  printf("Porcentagem de votos de Renata : %.2f\n", ((float)renata*100)/votos);
  printf("Porcentagem de votos em Branco : %.2f\n", ((float)branco*100)/votos);
  printf("Porcentagem de votos de Nulos : %.2f\n", ((float)nulo*100)/votos);
  return 0;
}