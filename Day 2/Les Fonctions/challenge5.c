#include <stdio.h>
#include <stdlib.h>
int factorielle(int n);
int main(){
    int n;
   printf("Saisez: ");
   scanf("%d", &n);

   int r = factorielle(n);

   printf("%d", r);
    return 0;
}

int factorielle(int n){
        int fact = 1;
    for (int i = 1; i <= n; i++){
        fact = i * fact;
    }
    return fact;
    
}
