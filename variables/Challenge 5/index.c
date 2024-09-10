#include <stdio.h>

int main(){

    float temp = 0;
    printf("entrer la température de l'eau en celcius : ");
    scanf(" %f",&temp);

    if(temp < 0){
        printf("l'état de l'eau est solid");
    }else if ( temp < 100){
        printf("l'état de l'eau est liquide");
    }else {
        printf("l'état de l'eau est gaz");
    }

    return 0;
}