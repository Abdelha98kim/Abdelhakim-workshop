#include <stdio.h>
#include <stdlib.h>

int main (){
    int nbr, i, j;
    char symb = '*';
    printf("Saisez un nombre: ");
    scanf("%d", &nbr);

    for (i = 1; i <= nbr; i++){
        for ( j = 1; j <= nbr - i; j++){
            printf(" ");
        }
        for ( j = 1; j <= (2*i-1); j++){
            printf("*");
        }
     printf("\n");
    }
    
    return 0;
}