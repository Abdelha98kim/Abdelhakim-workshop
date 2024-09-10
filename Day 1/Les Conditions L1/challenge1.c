#include <stdio.h>
#include <stdlib.h>
int main(){
    int nombre_saisez_par_utilisateur;
    printf("Entrez un nombre: ");
    scanf("%d", &nombre_saisez_par_utilisateur);

    if ((nombre_saisez_par_utilisateur % 2 ) == 0)
    {
        printf("%d est paire\n", nombre_saisez_par_utilisateur);
    }else{
        printf("%d est impaire\n", nombre_saisez_par_utilisateur);
    }
    
    return 0;
}
