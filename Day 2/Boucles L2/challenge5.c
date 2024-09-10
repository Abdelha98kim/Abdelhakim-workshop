#include <stdio.h>

int main(){
    int entier_saisez;
    int somme = 0;
    printf("Saisez un entier: ");
    scanf("%d", &entier_saisez);
    for(int i = 1; i <= entier_saisez; i++){
        somme = somme + i;
    }
    printf("%d", somme);
    return 0;
}