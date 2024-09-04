#include <stdio.h>
#include <stdlib.h>

int main (){
    int taille,i, valeur;
    printf("Saisez la taille: ");
    scanf("%d", &taille);
    int nombre[taille];
    for ( i = 0; i < taille; i++){
        printf("Saisez les element %d: ", i + 1);
        scanf("%d", &nombre[i]);
        
    }

    for ( i = 0; i < taille; i++){
        if (nombre[i] % 2  != 0){
            printf("%d ", nombre[i]);
        }
    }
    return 0;
}