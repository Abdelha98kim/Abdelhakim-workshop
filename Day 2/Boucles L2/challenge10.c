#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    char alphabet_chiffres[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"};
    int size_de_tableaux = sizeof(alphabet_chiffres);
    int longueur_saisez;
    printf("Saisez la longeur de votre mots de passe: ");
    scanf("%d", &longueur_saisez);

    char password[longueur_saisez];

    for (int i = 0; i < longueur_saisez; i++){
        password[i] = alphabet_chiffres[rand() % size_de_tableaux];
    }
    
    for (int i = 0; i < longueur_saisez; i++){
        printf("%c", password[i]);
    }
    // printf("Password: %s\n", password);
    return 0;
}