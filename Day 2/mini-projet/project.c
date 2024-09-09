#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define MAX_LIVRES 100
#define MAX_TITRE 100
#define MAX_AUTEUR 100

// Structure pour stocker les informations d'un livre
typedef struct {
    char titre[MAX_TITRE];
    char auteur[MAX_AUTEUR];
    float prix;
    int quantite;
} LIVRE;

LIVRE stock[MAX_LIVRES];
int Counter = 0;

// Fonction pour ajouter un livre au stock
void addBook() {
    if (Counter >= MAX_LIVRES) {
        printf("\033[38;5;196mLe stock est plein. Impossible d'ajouter plus de livres.\033[0m\n");
        return;
    }

    LIVRE newBook;
    printf("Entrez le titre du livre: ");
    fgets(newBook.titre, MAX_TITRE, stdin);
    newBook.titre[strcspn(newBook.titre, "\n")] = 0; 

    printf("Entrez l'auteur du livre: ");
    fgets(newBook.auteur, MAX_AUTEUR, stdin);
    newBook.auteur[strcspn(newBook.auteur, "\n")] = 0; 

    printf("Entrez le prix du livre: ");
    while (scanf("%f", &newBook.prix) != 1 || newBook.prix < 0) {
        printf("\033[38;5;196mPrix invalide. Veuillez entrer un prix valide: \033[0m");
        while (getchar() != '\n');
    }

    printf("Entrez la quantite en stock: ");
    while (scanf("%d", &newBook.quantite) != 1 || newBook.quantite < 0) {
        printf("\033[38;5;196mQuantite invalide. Veuillez entrer une quantit valide: \033[0m");
        while (getchar() != '\n');
    }

    stock[Counter] = newBook;
    Counter++;
    
        for (int i = 0; i <= 100; i++) {
          printf("\r\033[KProgress: [%s%s] %d%%",
               "\033[32m",
               "\033[0m" "=", i, i);
          fflush(stdout);
          usleep(1000);
        }
    printf("\n");
    printf("\033[32m\nLivre ajoute avec succes.\033[0m");
}

// Fonction pour afficher tous les livres disponibles
void displayBooks() {
    if (Counter == 0) {
        printf("\033[38;5;196m\nAucun livre en stock.\033[0m\n");
        return;
    }

    printf("\nListe des livres disponibles:\n");
    printf("\n");
    printf("---------------------------\n");
    for (int i = 0; i < Counter; i++) {
        printf("Titre: %s\n", stock[i].titre);
        printf("Auteur: %s\n", stock[i].auteur);
        printf("Prix: %.2f MAD\n", stock[i].prix);
        printf("Quantite: %d TTC\n", stock[i].quantite);
        printf("---------------------------\n");
    }
}

// Fonction pour rechercher un livre par son titre
void searchBook() {
    char searchTitle[MAX_TITRE];
    printf("Entrez le titre du livre a rechercher: ");
    fgets(searchTitle, MAX_TITRE, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = 0;

    for (int i = 0; i < Counter; i++) {
        if (strcmp(stock[i].titre, searchTitle) == 0) {
            printf("\n");
            printf("\033[32mLivre trouve:\033[0m\n");
            printf("Titre: %s\n", stock[i].titre);
            printf("Auteur: %s\n", stock[i].auteur);
            printf("Prix: %.2f MAD\n", stock[i].prix);
            printf("Quantite: %d TTC\n", stock[i].quantite);
            return;
        }
    }
    printf("\033[38;5;196mLivre non trouve.\033[0m\n");
}

// Fonction pour mettre à jour la quantité d'un livre
void updateQuantity() {
    char updateTitle[MAX_TITRE];
    int newQuantity;
    printf("Entrez le titre du livre a mettre a jour: ");
    fgets(updateTitle, MAX_TITRE, stdin);
    updateTitle[strcspn(updateTitle, "\n")] = 0;

    for (int i = 0; i < Counter; i++) {
        if (strcmp(stock[i].titre, updateTitle) == 0) {
            printf("Entrez la nouvelle quantite: ");
            while (scanf("%d", &newQuantity) != 1 || newQuantity < 0) {
                printf("\033[38;5;196mQuantite invalide. Veuillez entrer une quantite valide: \033[0m");
                while (getchar() != '\n');
            }
            stock[i].quantite = newQuantity;
            printf("\033[32mQuantite mise a jour avec succes.\033[0m\n");
            return;
        }
    }
    printf("\033[38;5;196mLivre non trouve.\033[0m\n");
}

// Fonction pour supprimer un livre du stock
void deleteBook() {
    char deleteTitle[MAX_TITRE];
    printf("Entrez le titre du livre a supprim");
    fgets(deleteTitle, MAX_TITRE, stdin);
    deleteTitle[strcspn(deleteTitle, "\n")] = 0;

    for (int i = 0; i < Counter; i++) {
        if (strcmp(stock[i].titre, deleteTitle) == 0) {
            char confirm;
            printf("\033[38;5;196mEtes-vous sur de vouloir supprimer ce livre? (Y/N): \033[0m");
            scanf(" %c", &confirm);
            if (confirm == 'y' || confirm == 'Y') {
                for (int j = i; j < Counter - 1; j++) {
                    stock[j] = stock[j + 1];
                }
                Counter--;
                printf("\033[32mLivre supprime avec succes.\033[0m\n");
            } else {
                printf("\033[38;5;196mSuppression annule.\033[0m\n");
            }
            return;
        }
    }
    printf("\033[38;5;196mLivre non trouve.\033[0m\n");
}

// Fonction pour afficher le nombre total de livres en stock
void displayTotalBooks() {
    int total = 0;
    for (int i = 0; i < Counter; i++) {
        total += stock[i].quantite;
    }
    printf("\nNombre total de livres en stock: %d livre\n", total);
}

int main() {
    int choice;

    while (1) {
        printf("\n");
        printf("\nSYSTEME DE GESTION DES LIVRES DANS LE STOCK\n");
        printf("\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre\n");
        printf("4. Mettre a jour la quantite d'un livre\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le nombre total de livres\n");
        printf("7. Quitter\n");
        printf("\nChoisissez une option: ");
        scanf("%d", &choice);
        while (getchar() != '\n');

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                updateQuantity();
                break;
            case 5:
                deleteBook();
                break;
            case 6:
                displayTotalBooks();
                break;
            case 7:
                printf("Au revoir!\n");
                return 0;
            default:
                printf("\n\033[38;5;196mOption invalide. Veuillez reessayer.\033[0m\n");
        }
    }

    return 0;
}
