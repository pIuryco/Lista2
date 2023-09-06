#include <stdio.h>
#include <math.h>

int main() {
    int cateto1, cateto2, hipotenusa;

    for (hipotenusa = 1; hipotenusa <= 500; hipotenusa++) {
      for (cateto1 = 1; cateto1 < hipotenusa; cateto1++) {
      for (cateto2 = cateto1; cateto2 < hipotenusa; cateto2++) {
    if (pow(cateto1, 2) + pow(cateto2, 2) == pow(hipotenusa,2)) {
                    printf("tripla de Pitágoras = (%d, %d, %d)\n", cateto1, cateto2, hipotenusa);
}
}
}
}

  return 0;
}
