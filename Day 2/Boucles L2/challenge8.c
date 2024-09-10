#include <stdio.h>

int main(){
    int tableaux_des_entier[9] = {2, 9, 8, 7, 5, 4, 1, 7, 3};
    int nombre_saisez;

    printf("Saisez un nombre: ");
    scanf("%d", &nombre_saisez);

    for(int i = 0; i <= 8; i++){
        if(tableaux_des_entier[i] == nombre_saisez){
            printf("Ce nombre est se trouve dans le tableaux d'index: %d\n", i);
        }

        // if(tableaux_des_entier[i] != nombre_saisez){
        //     printf("Ce nombre est ne se trouve pas dans le tableaux\n");
        // }
    }



    // if(nombre_saisez < tableaux_des_entier[4]){

    // }

    return 0;
}