#include <stdio.h>

int main(){
    int entier_saisez;

    printf("Sasiez Un entier: ");
    scanf("%d", &entier_saisez);
    printf("Les facteurs de %d: ", entier_saisez);
    for( int i = 1; i <= entier_saisez; i++){
        if(entier_saisez % i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}