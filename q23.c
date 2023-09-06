#include <stdio.h>

int main() {
    int a = 5, b = 5, pre, pos;
  puts("para dois inteiros de mesmo valor:\n");
pre = ++a;
printf("pré-incremento = %d, a = %d\n", pre, a);

pos = b++; 
printf("pós-incremento = %d, b = %d\n", pos, b);
    return 0;
}
