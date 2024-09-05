#include <stdio.h>
#include <stdlib.h>

int main (){
    int nombre;
    printf("Saisez un nombre: ");
    scanf("%d", &nombre);

    int i = 0;
    while (nombre != 0){
        nombre = nombre / 10;
        i++;
    }
    printf("%d", i);
    return 0;
}