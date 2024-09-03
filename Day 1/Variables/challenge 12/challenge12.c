#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // les variables 
      int nombre;
      char convert[30];

    // demande
      printf("saisez un entier: ");
      scanf("%d", &nombre);

    // mecanisme
      // transfer le nombre a une chaine de caractere
        sprintf(convert, "%d", nombre);

    // reversez est affichez le resultat
      printf("%s", strrev(convert));
   return 0;
}