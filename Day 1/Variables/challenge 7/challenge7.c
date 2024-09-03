#include <stdio.h>

int main(){
    // variables
      float a, b, c;
      float moyenne;

    // demande
      printf("Saisez le premier nombre: ");
      scanf("%f", &a);
      printf("Saisez le deuxieme nombre: ");
      scanf("%f", &b);
      printf("Saisez le troisieme nombre: ");
      scanf("%f", &c);

    // calcule
      moyenne = ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 +5);

    // affichage
      printf("\nLa moyenne ponderee est: %.2f", moyenne);

   return 0;
}