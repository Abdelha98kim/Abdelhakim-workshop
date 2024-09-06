#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct Livre{
    char titre[100];
    char auteur[100];
    float prix;
    int quantite;
}Livre;

Livre Ajouter_livre();
void Afficher_livre();

int main (){
    int selectioner, nombre_ajouter;

  /*  printf("\nSysteme de Gestion de Stock dans une Librairie\t \n");
    printf("----------------------------------------------\n");
    printf("Selectioner:\n");
    printf("1- Ajouter Un livre\n");
    printf("2- Afficher tous les livres\n");
    printf("3- Rechercher un livre\n");
    printf("4- Modifier les information d\'un livre\n");
    printf("5- Supprimer un livre\n");
    printf("6- Afficher le nombre totale des livres\n");
*/
    // scanf("%d", &selectioner);

   Livre ajoute =  Ajouter_livre();
   void affiche = Afficher_livre();
    return 0;
}


Livre Ajouter_livre(){
    Livre L1;
    printf("saisez le titre de livre: ");
    scanf(" %[^\n]", L1.titre);
    printf("saisez le Nom d\'auteur: ");
    scanf(" %[^\n]", L1.auteur);
    printf("saisez leur prix: ");
    scanf("%f", &L1.prix);
    printf("saisez la quantite disponible dans le stock: ");
    scanf("%d", &L1.quantite);

    return L1;
}

void Afficher_livre(Livre A[]){
    Livre L1;
    printf("Livre 1: \n");
    printf("Titre: %s\n", L1.titre);
    printf("auteur: %s\n", L1.auteur);
    printf("Prix: %f$\n", L1.prix);
    printf("La quantite dans le Stock: %d piece", L1.quantite);


}