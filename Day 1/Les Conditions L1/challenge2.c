#include <stdio.h>
#include <stdlib.h>
int main(){
    char le_caractere_saisez_par_utilisateur;

    printf("Saisez le caractere: ");
    scanf("%c", &le_caractere_saisez_par_utilisateur);

    switch (le_caractere_saisez_par_utilisateur)
    {
    case 'a':
     printf("a est un Voyelle");
    break;
    case 'e':
     printf("e est un Voyelle");
    break;
    case 'i':
     printf("i est un Voyelle");
    break;
    case 'o':
     printf("o est un Voyelle");
    break;
    case 'u':
     printf("u est un Voyelle");
    break;
    case 'A':
     printf("A est un Voyelle");
    break;
    case 'E':
     printf("E est un Voyelle");
    break;
    case 'I':
     printf("I est un Voyelle");
    break;
    case 'O':
     printf("O est un Voyelle");
    break;
    case 'U':
     printf("U est un Voyelle");
    break;
    
    default:
     printf("%c n\'est pas un Voyelle", le_caractere_saisez_par_utilisateur);
    break;
    }
    return 0;
}
