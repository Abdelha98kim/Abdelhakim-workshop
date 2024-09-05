#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, f, i;
    int x1 = 0, x2 = 1;
    printf("Saisez un nombre: ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++){
        printf("%d ", x1);
        f = x1 + x2;
        x1 = x2;
        x2 = f;
    }
    return 0;
}