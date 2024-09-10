#include <stdio.h>

int main(){
    float moyenne;
    printf("Saisez votre moyenne: ");
    scanf("%f", &moyenne);
    if(moyenne < 10){
        printf("recale");
    }else if(moyenne >= 10 && moyenne < 12){
        printf("Passable");
    }else if(moyenne >= 12 && moyenne < 14){
        printf("Assez Bien");
    }else if(moyenne >= 14 && moyenne < 16){
        printf("Bien");
    }else{
        printf("Tres Bien");
    }
}