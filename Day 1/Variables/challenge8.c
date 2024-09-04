#include <stdio.h>
#include <math.h>

int main(){
    // les variables
      float a, b, c, produit, moyenne;
      const float nbr = 0.33333333;

    // la demande
      printf("Saisez A: ");
      scanf("%f", &a);
      printf("Saisez B: ");
      scanf("%f", &b);
      printf("Saisez C: ");
      scanf("%f", &c);

    // les operation
      produit = a * b * c;
      moyenne = pow((produit), (nbr));

    // l'affichage
      printf("Moyenne geometrique = %.2f \n", moyenne);
   return 0;
}