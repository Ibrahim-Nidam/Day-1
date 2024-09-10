#include <stdio.h>

int main(){

    float dis,yard;
    printf("entrer la distance en kilomètre a convertir : ");
    scanf(" %f",&dis);

    yard = dis * 1093.61;

    printf("la température en kelvin est : %.2f Yards",yard);
    return 0;
}