#include <stdio.h>

int main(){
    int taille, i;

    // la demande
      printf("Saisez le nombre d'element: ");
      scanf("%d", &taille);
    // creation d'un tableaux
      int note[taille];

      for( i = 0; i < taille; i++ ){
        printf("Saisez la valeur %d: \n", i+1);
        scanf("%d", &note[i]);
      }
      for( i = 0; i < taille; i++){
        printf("note %d: %d\n", i+1, note[i]);
      }

   return 0;
}