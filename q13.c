#include <stdio.h>

int main() {
  int a, b, somatorio;
  
  puts("escolha um intervalo de numeros");
  scanf("%d %d", &a, &b);
  if(a > b){
    a = a^b;
    b = a^b;
    a = a^b;
  }
for(int i = a; i <= b; i++){
  if(i%2== 0){
    somatorio += i;
  }
}
printf("Somatorio dos pares no intervalo (%d, %d): %d",a,b, somatorio);
  return 0;
}