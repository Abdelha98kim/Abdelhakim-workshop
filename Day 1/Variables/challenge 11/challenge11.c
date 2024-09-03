#include <stdio.h>

int main(){
    // variables 
      float longeur, largeur, surface;

    // demande
      printf("Saisez la longeur de rectangle: ");
      scanf("%f", &longeur);
      printf("Saisez la largeur de rectangle: ");
      scanf("%f", &largeur);

    // operation
      surface = longeur * largeur;

    // affichage
      printf("La surface est: %.2f", surface);
   return 0;
}