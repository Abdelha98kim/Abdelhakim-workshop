#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int base, exposant, resultat, i;

    printf("Sasaiez la base: ");
    scanf("%d", &base);
    printf("Sasaiez l'exposant: ");
    scanf("%d", &exposant);
     resultat = 1;
    for ( i = 0; i <= base; i++){
        resultat = resultat * base ;
    }

   // resultat = pow(base, exposant);

    printf("%d^%d = %d", base, exposant, resultat);
    return 0;
}