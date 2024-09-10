#include <stdio.h>

int main(){
    int entier_saisez;
    printf("Saisez un entier: ");
    scanf("%d", &entier_saisez);
    int a = 0;
    int b = 1;
    int somme = 1;
    for (int i = 0; i <= entier_saisez; i++){
        somme = a + b;
        printf("%d ", a);
        a = b;
        b = somme;
    }
    return 0;
}