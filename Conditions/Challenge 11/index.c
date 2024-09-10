#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomDate(){
    int min = 1;
    int max = 7;
    int jour = rand();
    int random = jour % (max - min + 1) + min;
    char *jours[]={
        "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"
    };
    
        printf("%s\n",jours[random - 1]);
    
}

int main() {
    srand(time(0));
    randomDate();
    return 0;
}