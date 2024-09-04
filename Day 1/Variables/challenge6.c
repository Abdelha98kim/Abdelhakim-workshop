#include <stdio.h>

int main(){
    // s= somme m = moyenne p = produit d = division
    float a, b, s, m, p, d;

    // demande a l'utilisateur de saisez les deux nombres
    printf("Saisez le premier nombre: ");
    scanf("%f", &a);
    printf("Saisez le deuxieme nombre: ");
    scanf("%f", &b);

    // l'operation
    s = a + b;
    m = a - b;
    p = a * b;
    d = a / b;
    //l'affichage
    printf("\n%.2f + %.2f = %.2f \n", a, b, s);
    printf("\n%.2f - %.2f = %.2f \n", a, b, m);
    printf("\n%.2f * %.2f = %.2f \n", a, b, p);
    printf("\n%.2f / %.2f = %.2f \n", a, b, d);

    return 0;
}