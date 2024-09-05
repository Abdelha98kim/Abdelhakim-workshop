#include <stdio.h>

int somme(int a, int b);

int main(){
    int a, b;
    printf("Saisez le premier nombre: ");
    scanf("%d", &a);
    printf("saisez le seuxieme nombre: ");
    scanf("%d", &b);
    int r = somme (a, b);
    printf("%d", r);
   return 0;
}

int somme(int a, int b){
    return a + b;
}