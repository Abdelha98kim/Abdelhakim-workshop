#include <stdio.h>

int main(){
    float c;

    // demande a l'utilisateur de saisez la temperateur en Celisius
    printf("Saisez la temperateur de l'eaux en Celisius: ");
    scanf("%f", &c);

    //la comparaison
    if(c < 0){
        printf("Solide");
    }else if (c >= 100){
        printf("gaz");
    }else{
        printf("Liquide");
    }

  return 0;
}