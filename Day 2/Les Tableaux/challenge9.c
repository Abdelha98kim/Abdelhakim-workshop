#include <stdio.h>

int main(){
    int tableaux_1[] = {0,1,2,3,4,5};
    int size = sizeof(tableaux_1) / sizeof(tableaux_1[0]);
    int tableaux_2[size];

    for (int i = 0; i < size; i++){
        tableaux_2[i] = tableaux_1[size - 1 - i];
    }

    for (int i = 0; i < size; i++){
        printf("%d ", tableaux_2[i]);
    }
    return 0;
}