#include <stdio.h>
#include <stdlib.h>
int main(){
    int annee_saisez_par_utilisateur, mois, jour, heure, minute, seconde;
    printf("Saisez l\'annee: ");
    scanf("%d", &annee_saisez_par_utilisateur);
    jour =  365;
    mois = jour / 30;
    jour = mois * 30;
    heure = jour * 24;
    minute = heure * 60;
    seconde = minute * 60;

    printf("%d contient:\n", annee_saisez_par_utilisateur);
    printf("%d Mois:\n", mois);
    printf("%d Jours:\n", jour);
    printf("%d Heures:\n", heure);
    printf("%d Minutes:\n", minute);
    printf("%d Seconde:\n", seconde);
    return 0;
}
