#include <stdio.h>
#include <stdlib.h>

void fibo(int n);
int main(){
    int n;
    printf("Saisez un nombre: ");
    scanf("%d", &n);
    fibo(n);
}


void fibo(int n){
    int a, b, c;
    a = 0;
    b = 1;
    for (int i = 0; i <= n; i++){
    printf("%d ", a);
    c = a + b;
    a = b;
    b = c;
    }
}