#include <stdio.h>
#include <stdlib.h>

int parite(int n);

int main (){
    int n; 
    printf("Saisez un nombre: ");
    scanf("%d", &n);
    int r = parite(n);
    if (r == 1){
        printf("\nCe nombre est pair");
    }else{
        printf("\nCe nombre est impaire");
    }
    return 0;
}

int parite(int n){
    if(n % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}