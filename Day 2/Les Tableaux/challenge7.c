#include <stdio.h>

int main(){
    int size, switching;
    printf("Combien d'entier tu va stocker: ");
    scanf("%d", &size);
    int entiers[size];

    for (int i = 0; i  <= size - 1; i++){
        printf("Entier %d: ", i+1);
        scanf("%d", &entiers[i]);
    }

     for (int i = 0; i  <= size - 1; i++){
         for (int j = 0; j <= size - 1; j++){
             if(entiers[j] > entiers[j+1]){
                switching = entiers[j];
                entiers[j] = entiers[j+1];
                entiers[j+1] = switching;
             }
            }
            
    }

    for (int i = 0; i < size; i++){
        printf("%d ", entiers[i]);
    }
    return 0;
}