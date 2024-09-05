#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, somme;
    printf ("Saiser in nombre: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        somme = somme + i;
    }
    printf("%d", somme);
    return 0;
}