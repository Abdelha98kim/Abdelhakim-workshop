#include <stdio.h>

int main (){
    int nombre, i, operation;
    printf ("Saisez un nombre positive: ");
    scanf("%d", &nombre);
    operation = 1;
    for ( i = 1; i <= nombre; i++ ){
        operation = operation * i;
    }

    printf("%d! = %d", nombre, operation);
    return 0;
}