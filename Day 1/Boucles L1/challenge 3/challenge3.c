#include <stdio.h>

int main (){
    int nombre, i, operation;
    printf ("\nSaisez un nombre positive: ");
    scanf("%d", &nombre);
    operation = 0;
    for ( i = 0; i <= nombre; i++ ){
        operation = operation + i;
    }

    printf("\nla somme des premier %d nombre est : %d", nombre, operation);
    return 0;
}