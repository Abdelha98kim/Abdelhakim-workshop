#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, f, i;
    printf("Saisez un nombre: ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++){
        f = f + ( n - i );
    }
    printf("Resultat: %d", f);
    
    return 0;
}