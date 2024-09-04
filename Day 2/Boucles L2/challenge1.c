#include <stdio.h>
#include <stdlib.h>

int main (){
    // Variables
    int nombre, i, result;

    // La Demand
      printf("Saiser Un nombre: ");
      scanf("%d", &nombre);

    // principe
      for (i = 10; i > 1; i--){
        result = nombre * i;
        printf("%d * %d = %d \n", nombre, i, result );
      }
    return 0;
}