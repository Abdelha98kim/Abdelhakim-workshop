#include <stdio.h>
#include <stdlib.h>

int multiplication(int a, int b);

int main (){
    int a, b;
    printf("Saisez premier nombre: ");
    scanf("%d", &a);
    printf("Saisez le deuxieme nombre: ");
    scanf("%d", &b);

    int r = multiplication(a, b);
    printf("%d * %d  = %d",a, b, r);
    
    return 0;
}

int multiplication(int a, int b){
    return a * b;
}