#include <stdio.h>

int main(){
    int nombre_saisez;

    printf("Saisez un entier: ");
    scanf("%d", &nombre_saisez);
    for(int i = 1; i <= nombre_saisez; i+=2){
        printf("%d ", i);
    }
    return 0;
}