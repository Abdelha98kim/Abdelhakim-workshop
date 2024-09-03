#include <stdio.h>

int main(){
    int taille, i, fact;
    printf("Saisez la taille: ", taille);
    scanf("%d", &taille);
    printf("\n");

    int nombre[taille];
    for ( i = 0; i < taille; i++){
        printf("saisez la valeur %d: ", i+1);
        scanf("%d", &nombre[i]);
    }
    printf("\nsaisez le facteur de multiplication: ");
    scanf("%d", &fact);
    for ( i = 0; i < taille; i++){
        printf("La valeur %d est: %d \n", i+1, nombre[i] * fact);
    }
   return 0;
}