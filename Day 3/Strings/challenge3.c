#include <stdio.h>
#include <stdlib.h>

int main (){
    char chaine1[100];
    char chaine2[100];
    printf("Prenom: ");
    scanf("%s", chaine1);
    printf("Nom: ");
    scanf("%s", chaine2);

    printf("%s %s", chaine1, chaine2);
    
    return 0;
}