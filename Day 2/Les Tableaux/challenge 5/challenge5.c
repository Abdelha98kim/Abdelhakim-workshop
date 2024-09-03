#include <stdio.h>

int main(){
    int taille, i;

    printf("Saisez la taille: ");
    scanf("%d", &taille);

    int nombre[taille];
    for( i = 0; i < taille; i++){
      printf("saisez valeur %d: \n", i+1);
      scanf("%d", &nombre[i]);
    }

    int min = nombre[0];
    for ( i = 0; i < taille; i++){
      
      if (min > nombre[i])
      {
         min = nombre[i];
      }
    }
    printf ("le min est: %d", min);
   return 0;
}