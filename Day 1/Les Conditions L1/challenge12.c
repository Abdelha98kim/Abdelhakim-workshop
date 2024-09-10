#include <stdio.h>

int main(){
    int heure1, minute1, seconde1, heure2, minute2, seconde2;

    printf("Premier instant: \n");
    printf("Heures: ");
    scanf("%d", &heure1);
    printf("Minutes: ");
    scanf("%d", &minute1);
    printf("Seconde: ");
    scanf("%d", &seconde1);
    printf("Deuxieme instant: \n");
    printf("Heures: ");
    scanf("%d", &heure2);
    printf("Minutes: ");
    scanf("%d", &minute2);
    printf("Seconde: ");
    scanf("%d", &seconde2);

    if (heure1 < heure2 || (heure1 == heure2 && minute1 < minute2) || (heure1 == heure2 && minute1 == minute2 && seconde1 < seconde2)){
        printf("Le premier instant vient avant le deuxieme");
    }else if(heure2 < heure1 || (heure1 == heure2 && minute2 < minute1) || (heure1 == heure2 && minute1 == minute2 && seconde2 < seconde1)){
        printf("Le deuxieme instant vient avant le premier");
    }else{
        printf("Il s'agit du meme instant");
    }
}