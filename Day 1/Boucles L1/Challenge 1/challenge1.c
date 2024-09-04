#include <stdio.h>
int main(){
    int nombre, i, operation;

    printf("Saisez un nomrbe: ");
    scanf("%d", &nombre);

    for ( i = 1; i < 11; i++){
        operation = nombre * i;
        printf("%d * %d = %d \n", nombre, i, operation);
    }
  return 0;
}