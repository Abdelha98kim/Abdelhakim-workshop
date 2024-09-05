#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int nombre, operation, inverse;
    printf("Saisez u nombre: ");
    scanf("%d", &nombre);

    while (nombre != 0){
        operation = nombre % 10;
        inverse = inverse * 10 + operation;
        nombre = nombre / 10;

    }
    printf("Le nombre inverse est: %d\n", inverse);
    
    return 0;
}