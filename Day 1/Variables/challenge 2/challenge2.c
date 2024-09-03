#include <stdio.h>

int main(){
    // temp = temperateur saisez par l'utilisateur
    float temp;
    float k;

    // demande a l'utilisateur de saisez la temperateur
    printf("Saisez la temperateur en Celsius: ");
    scanf("%f", &temp);

    // la transformation
    k = temp + 273.15;

    //l'affichage
    printf("\nLa temperateur En Kelvin est: %.2f kelvin", k);


}