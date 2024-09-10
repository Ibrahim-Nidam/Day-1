#include <stdio.h>

int main(){

    float temp,k;
    printf("entrer la température en celcius a convertir : ");
    scanf(" %f",&temp);

    k = temp + 273.15;

    printf("la température en kelvin est : %.2f K",k);
    return 0;
}