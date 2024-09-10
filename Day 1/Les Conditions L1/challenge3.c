#include <stdio.h>
#include <stdlib.h>
int main(){
    int valeur1, valeur2, somme;
    printf("Saisez le premier numero: ");
    scanf("%d", &valeur1);
    printf("Saisez la deuxieme numero: ");
    scanf("%d", &valeur2);

    somme = valeur1 + valeur2;

    if(valeur1 == valeur2){
        somme = somme * 3;
        printf("%d", somme);
    }else{
        printf("%d + %d = %d", valeur1, valeur2, somme);
    }

    return 0;
}
