#include <stdio.h>
#include <math.h>

int main(){
    //les variables
      float x1, y1, z1, x2, y2, z2, distance;
      float X, Y, Z;

    // demande
      printf("Saisez X1: ");
      scanf("%f", &x1);
      printf("Saisez X2: ");
      scanf("%f", &x2);
      printf("Saisez Y1: ");
      scanf("%f", &y1);
      printf("Saisez Y2: ");
      scanf("%f", &y2);
      printf("Saisez z1: ");
      scanf("%f", &z1);
      printf("Saisez z2: ");
      scanf("%f", &z2);

    // operation
      X = x2 - x1;
      Y = y2 - y1;
      Z = z2 - z1;

      distance = sqrt((pow(X,2)) + (pow(Y,2)) + (pow(Z,2)));

    // L'affichage
      printf("La distance entre cette deux points est: %.2f", distance);

   return 0;
}