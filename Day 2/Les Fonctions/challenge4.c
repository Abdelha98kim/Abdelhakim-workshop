#include <stdio.h>
#include <stdlib.h>
void min (int a, int b);
int main(){
    int a, b;
    printf("Saisez la valeur 1: ");
    scanf("%d", &a);
    printf("Saisez la valeur 2: ");
    scanf("%d", &b);
    min(a,b);

    return 0;
}

void min (int a, int b){

   if (a == b ){
    printf("Les deux nombres sont egaux");
   }else if (a > b){
    printf("Le min est: %d", b);
   }else{
    printf("Le min est: %d", a);
   }
}
