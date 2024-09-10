#include <stdio.h>
#include <stdlib.h>
int main(){
    int nombre_saisez_par_utilisateur;
    printf("Saisez un nombre: ");
    scanf("%d", &nombre_saisez_par_utilisateur);

    if(nombre_saisez_par_utilisateur > 0){
        printf("%d est positif", nombre_saisez_par_utilisateur);
    }else if (nombre_saisez_par_utilisateur < 0){
        printf("%d est negatif", nombre_saisez_par_utilisateur);
    }else{
        printf("Nul", nombre_saisez_par_utilisateur);
    }
    return 0;
}
