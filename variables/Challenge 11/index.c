#include <stdio.h>

int main(){
    float lon,lar,sur;

    printf("Pour calculer la surface d'un rectangle entrer longeur : ");
    scanf(" %f",&lon);
    printf("entrer la largeur : ");
    scanf(" %f",&lar);
    
    sur = lon * lar;

    printf("la surface du rectangle est : %.2f",sur);
    return 0;
}