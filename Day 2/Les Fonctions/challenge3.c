#include <stdio.h>
#include <stdlib.h>

void max(int a, int b);

int main (){
    int a, b;
    printf("Saisez la valeur 1: ");
    scanf("%d", &a);
    printf("Saisez la valeur 2: ");
    scanf("%d", &b);

     max(a, b);
    return 0;
}

void max(int a, int b){
    if(a == b){
        printf("\n%d et %d sont egaux essai d entrer des valeur  differant.", a, b);
    } else if (a > b){
        printf ("`\n%d est le max", a);
    }else{
        printf("\n%d est le max", b);
    }
}