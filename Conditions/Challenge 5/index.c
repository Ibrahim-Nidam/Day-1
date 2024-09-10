#include <stdio.h>

int main() {
    int annee,choix;
    int bissextile = 366;
    int nonBissextile = 365;
    printf("entrer l'année souhaiter : ");
    scanf(" %d",&annee);

    printf("1 - Mois        2 - Jours\n3 - Heures      4 - Minutes\n5 - seconds\n");
    printf("choisir le numéro a laquelle convertir l'année : ");
    scanf(" %d",&choix);
    
    if ((annee % 4 == 0 && annee % 100 != 0 ) || annee % 400 == 0){
        annee = bissextile;
        printf("bissextile\n");
    }else{
        annee = nonBissextile;
        printf("non bissextile\n");
    }
    
    
    switch(choix){
        case 1:
            printf("Année a 12 Mois");
        break;
        case 2:
            printf("Année a %d Jours",annee);
        break;
        case 3:
            printf("Année a %d Heures",annee * 24);
        break;
        case 4:
            printf("Année a %d Minutes",annee * 24 * 60);
        break;
        case 5:
            printf("Année a %d Seconds",annee * 24 * 60 * 60);
        break;
        default:
            printf("Entrer un correct choix");
        break;
    }
    return 0;
}