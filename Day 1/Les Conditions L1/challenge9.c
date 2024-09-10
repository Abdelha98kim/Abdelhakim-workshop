#include <stdio.h>

int main(){
    char caractere_saisez;
    
    printf("Saisez un caractere: ");
    scanf("%c", &caractere_saisez);
    int ascii = caractere_saisez;

    if((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)){
        if (ascii >= 65 && ascii <= 90) {
            printf("Ce caratere et un alphabet majuscule");
        }else{
            printf("Ce caractere et un alphabet miniscule");
        }
    }else{
        printf("Ce caractere n'est pas un alphabet");
    }
}