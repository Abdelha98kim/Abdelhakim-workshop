#include <stdio.h>

int main(){
    int taille, i;
    printf("Saisez le nombre des element: ");
    scanf("%d", &taille);

    int nombre[taille];
      for ( i = 0; i < taille; i++){
        printf("saisez la valeur %d: \n", i+1);
        scanf("%d", &nombre[i]);
      }
     int max = nombre[0];
      for ( i = 0; i < taille; i++ ){
        if( max < nombre[i]){
            max = nombre[i];
        }
        
      }

    printf("\nLe max: %d \n", max);
   return 0;
}