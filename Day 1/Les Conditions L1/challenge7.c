#include <stdio.h>

int main(){
    char alphabet_saisez_par_utilisateur;

    printf("Saisez un alphabet: ");
    scanf("%c", &alphabet_saisez_par_utilisateur);
    int ascii = alphabet_saisez_par_utilisateur;
    if (ascii >= 65 && ascii <= 90)
    {
        printf("Cette alphabet et majuscule");
    }else{
        printf("Cette alphabet et miniscule");
    }
    

}