#include <stdio.h>

int main(){

    float kilo,m;
    printf("entrer la vitesse en kilomètre par heure a convertir : ");
    scanf(" %f",&kilo);

    m = kilo * 0.27778;

    printf("la température en kelvin est : %.2f m/s",m);
    return 0;
}