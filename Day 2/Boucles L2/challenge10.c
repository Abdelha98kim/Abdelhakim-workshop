#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    char majuscules[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    char miniscules[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    int chiffres[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int longueur_saisez;
    printf("Saisez la longeur de votre mots de passe: ");
    scanf("%d", &longueur_saisez);

    for (int i = 0; i <= longueur_saisez; i++){
        srand(majuscules);
        char password = rand();
        printf("%c", password);
    }
    return 0;
}