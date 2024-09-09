#include <stdio.h>
#include <string.h>



 struct etudiant{
     char nom[50];
     char prenom[50];
     int notes[3];
 };

int main()
{
    struct etudiant e1;
    strcpy(e1.nom, "Baalla");
    strcpy(e1.prenom, "Abdelhakim");
    e1.notes[0] = 17;
    e1.notes[1] = 19;
    e1.notes[2] = 20;
    
    printf("Bonjour %s %s\n", e1.nom, e1.prenom);
    printf("Note 1: %d\n", e1.notes[0]);
    printf("Note 2: %d\n", e1.notes[1]);
    printf("Note 3: %d\n", e1.notes[2]);

    return 0;
}