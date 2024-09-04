#include <stdio.h>

int main(){
    int nombre, i, operation;
    printf("Saisez un entier: ");
    scanf("%d", &nombre);

    operation = 1;
    for ( i = 0; i < nombre; i++ ){
        printf("%d, ", operation);
        operation = operation + 2;
        
    }
  return 0;
}
