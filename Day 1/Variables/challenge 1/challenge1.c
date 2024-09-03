#include <stdio.h>

int main(){
    int age;
    char prenom[25];
    char nom[25];
    char email[256];
    char sexe[25];


    // demand à l'utilisateur d'enter votre
    printf("Entrer Votre prenom: ");
    scanf("%s", &prenom);

    printf("Entrer Votre nom: ");
    scanf("%s", &nom);

    printf("Entrer Votre sexe: ");
    scanf("%s", &sexe);

    printf("Entrer Votre age: ");
    scanf("%d", &age);

    printf("Entrer Votre email: ");
    scanf("%s", &email);

    // l'affichage des donneé
    printf("\nBonjour %s %s, Vous avez %d ans \n", prenom, nom, age);
    printf("Votre email: %s \n", email);
    printf("Votre Sexe: %s \n", sexe);

    return 0;
}