#include <stdio.h>

int main(){
    int base, exposant, puissance;

    printf("Saisez une base positive: ");
    scanf("%d", &base);
    printf("Saisez un exposant positive: ");
    scanf("%d", &exposant);

    int counter = 0;
    puissance = 1;
     while (counter != exposant)
     {
         puissance = puissance * base;
         counter++;
     }

     printf("%d ^ %d = %d", base, exposant, puissance);

    return 0;
}