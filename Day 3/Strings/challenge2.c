#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char chaine[100];
    printf("Saisez Un mot: ");
    scanf("%s", chaine);

    int result = strlen(chaine);
    printf("\n%d charactere", result);
    return 0;
}