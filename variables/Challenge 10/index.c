#include <stdio.h>
#include <math.h>

int main(){
    float r,vol;
    const float PI = 3.14;
    printf("Pour calculer le volume d'une sphère entrer le rayon : ");
    scanf(" %f",&r);

    vol = (4.0/3.0)* PI * pow(r,3);

    printf("le volume du sphére est : %.2f",vol);
    return 0;
}