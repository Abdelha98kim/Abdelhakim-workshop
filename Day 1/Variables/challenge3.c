#include <stdio.h>

int main(){
    float km;
    float yard;

    // demande a l'utilisateur de saisez la distance en kilomètre
    printf("Saisez la distance en kilometre: ");
    scanf("%f", &km);

    // la transformation
    yard = km * 1093.61;

    //l'affichage
    printf("\nLa distance En Yard est: %.2f ", yard);


}