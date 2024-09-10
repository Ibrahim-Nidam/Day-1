#include <stdio.h>


int main (){
    int nombre;
    int mil,cent,dix,unit;

    printf("entrer un nombre a inverse : ");
    scanf(" %d",&nombre);

    mil = nombre /1000;
    dix = (nombre/10) % 10;
    cent = (nombre/100)%10;
    unit = (nombre%10);
    printf("l'inverse du nombre est %d%d%d%d",unit,dix,cent,mil);
    


    return 0;
}