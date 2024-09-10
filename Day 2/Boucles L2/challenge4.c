#include <stdio.h>

int main(){
    int entier_saisez;
    printf("Saisez un entier de plusieur chiffre: ");
    scanf("%d", &entier_saisez);
    int i = 0;
    while(entier_saisez != 0){
        int reste = entier_saisez % 10;
        entier_saisez = entier_saisez /10;
        printf("%d", reste);
        i++;
    }
    return 0;
}