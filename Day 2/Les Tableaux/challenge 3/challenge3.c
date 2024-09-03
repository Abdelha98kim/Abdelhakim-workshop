#include <stdio.h>

int main(){
    int taille, i, valeur, operation;

    printf("Saisez le nombre d'element: ");
    scanf("%d", &taille);
    int nombre[taille]; 

    operation = 0;
    for( i = 0; i < taille; i++){
        printf("Saisez la valeur %d: \n", i+1);
        scanf("%d", &valeur);
        operation = operation + valeur;
    }

    printf("La somme est: %d", operation);
    
   return 0;
}