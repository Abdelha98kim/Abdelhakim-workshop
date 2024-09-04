#include <stdio.h>
#include <stdlib.h>

int main (){
    int nbr, i;
    char symb = '*';
    printf("Saisez un nombre: ");
    scanf("%d", &nbr);

    for (i = 1; i < nbr; i++){
        for ( int j = 1; j < nbr; j++){
            printf("*");
        }
    }
    
    return 0;
}