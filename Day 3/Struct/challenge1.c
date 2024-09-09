
#include <stdio.h>
#include <string.h>

struct personne{
    char nom[50];
    char prenom[50];
    int age;
};

int main()
{
    struct personne p1;
    strcpy(p1.nom, "Baalla");
    strcpy(p1.prenom, "Abdelhakim");
    p1.age = 18;
    
    printf("%s ", p1.nom);
    printf("%s\n", p1.prenom);
    printf("%d ans", p1.age);

    return 0;
}