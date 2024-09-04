#include <stdio.h>

int main(){
    int kmh;
    float ms;

    // demande a l'utilisateur de saisez la vitesse en kilometre par heure
    printf("Saisez la vitesse en kilometre par heure (Km/h) : ");
    scanf("%d", &kmh);

    // la transformation
    ms = kmh * 0.27778;

    //l'affichage
    printf("\nLa distance En Yard est: %.2f ", ms);

    return 0;
}