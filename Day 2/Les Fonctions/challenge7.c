#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverse(char chaine[]);

int main(){
    char chaine[100];
    printf("Saisez un nom: ");
    scanf("%s", chaine);
    inverse(chaine);
    return 0;
}

void inverse(char chaine[]){
    int l = strlen(chaine);
     for (int i = 0, j = l-1; i<j; i++, j--){
        int c = chaine[i];
        chaine[i] = chaine[j];
        chaine[j] = c;

     }
     printf("%s", chaine);
}
