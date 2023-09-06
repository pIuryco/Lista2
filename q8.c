#include <stdio.h>

int main(){
    float preco;
    puts("quanto custa a mercadoria?");
    scanf("%f", &preco);
    
    int parcelas = preco / 3;
    float entrada = preco - (parcelas * 2);
  printf("valor da entrada: R$ %.2f\n", entrada);
  printf("valor das parcelas: R$ %d \n", parcelas);
}