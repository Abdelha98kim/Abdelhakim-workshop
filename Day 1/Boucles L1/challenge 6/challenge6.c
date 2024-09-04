#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, i, result;
    printf("saisez un entier: ");
    scanf("%d", &n);
    
    result = 0;
    for( i = 0; i < n ; i++ ){
        result = result + 2;
        printf("%d ", result);
    }
    return 0;
}