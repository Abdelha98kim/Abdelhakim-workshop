#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a, b, c;
    float delta, s1, s2;
    printf("Saisez A: ");
    scanf("%d", &a);
    printf("Saisez B: ");
    scanf("%d", &b);
    printf("Saisez C: ");
    scanf("%d", &c);

    delta = pow(b,2) - (4 * a * c);

    if(delta > 0){
        s1 = -b + sqrt(delta) / ( 2 * a );
        s2 = -b - sqrt(delta) / ( 2 * a );
        printf("L\'equation admet deux solution:\nX1 = %f\nX2 = %f", s1, s2);
    }else if(delta < 0){
        printf("Pas de Solution");
    }else{
        s1 = -b / ( 2 * a );
        printf("L\'equation admet un seule solution:\nX1 = %f", s1);
    }
    return 0;
}
