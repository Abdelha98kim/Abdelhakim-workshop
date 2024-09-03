#include <stdio.h>
#include <math.h>

int main(){
    //les variables (r = rayon)
      float r, operation, volume;

    // constantes
      const float pi = 3.14;

    // demande
      printf("Saisez le rayon: ");
      scanf("%f", &r);

    // operation
      operation = pow(r,3);
      volume = ( 4  * pi * operation ) / 3;


    // L'affichage
      printf("Le Volume est: %.2f", volume);

   return 0;
}