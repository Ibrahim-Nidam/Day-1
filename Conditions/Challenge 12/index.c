#include <stdio.h>

void heures(int *hr, int *hr1){
    printf("Entrer l'heure : ");
    scanf(" %d",hr);
    while (*hr < 0 || *hr > 23){
        printf("invalide, Entrer un nombre entre 0 - 24 : ");
        scanf(" %d",hr);
    }
    printf("Entrer l'heure a comparé: ");
    scanf(" %d",hr1);
    while (*hr1 < 0 || *hr1 > 23){
        printf("invalide, Entrer un nombre entre 0 - 24 : ");
        scanf(" %d",hr1);
    }
    printf("%02d : MM : SS - %02d : MM : SS \n",*hr,*hr1);

}

void minutes(int *min, int *min1,int hr,int hr1){
    printf("Entrer les minutes : ");
    scanf(" %d",min);
    while (*min < 0 || *min > 59){
        printf("invalide, Entrer un nombre entre 0 - 59 : ");
        scanf(" %d",min);
    }
    printf("Entrer les minutes a comparé: ");
    scanf(" %d",min1);
    while (*min1 < 0 || *min1 > 59){
        printf("invalide, Entrer un nombre entre 0 - 59 : ");
        scanf(" %d",min1);
    }
    printf("%02d : %02d : SS - %02d : %02d : SS \n",hr,hr1,*min,*min1);

}

void secondes(int *sec,int *sec1){
    printf("Entrer les secondes : ");
    scanf(" %d",sec);
    while (*sec < 0 || *sec > 59){
        printf("invalide, Entrer un nombre entre 0 - 59 : ");
        scanf(" %d",sec);
    }
    printf("Entrer les secondes a comparé: ");
    scanf(" %d",sec1);
    while (*sec1 < 0 || *sec1 > 59){
        printf("invalide, Entrer un nombre entre 0 - 59 : ");
        scanf(" %d",sec1);
    }

}

void comparaison(int hr, int hr1, int min, int min1, int sec, int sec1){
    if (hr < hr1 || (hr == hr1 && (min < min1 || (min == min1 && sec < sec1)))) {
        printf("Le premier instant vient avant le deuxième.\n");
    } else if (hr > hr1 || (hr == hr1 && (min > min1 || (min == min1 && sec > sec1)))) {
        printf("Le deuxième instant vient avant le premier.\n");
    } else {
        printf("Il s'agit du même instant.\n");
    }
}

int main(){
    int hr,min,sec;
    int hr1,min1,sec1;

    printf("Pour comparer l'horaire sous formes HH : MM : SS, entrer les données suivantes : \n");

    heures(&hr,&hr1);
    minutes(&min,&min1,hr,hr1);
    secondes(&sec,&sec1);

    printf("%02d : %02d : %02d - %02d : %02d : %02d \n",hr,min,sec,hr1,min1,sec1);

    comparaison(hr,hr1,min,min1,sec,sec1);
    return 0;
}