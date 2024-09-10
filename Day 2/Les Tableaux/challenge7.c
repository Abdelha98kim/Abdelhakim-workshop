#include <stdio.h>

int main(){
    int size;
    printf("Combien d'entier tu va stocker: ");
    scanf("%d", &size);
    int entiers[size];

    for (int i = 0; i  <= size - 1; i++){
        printf("Entier %d: ", i+1);
        scanf("%d", &entiers[i]);
    }
    // for (int i = 0; i  <= size - 1; i++){
    //     printf("%d ", entiers[i]);
    // }
    return 0;
}