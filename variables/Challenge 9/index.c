#include <stdio.h>
#include <math.h>

int main (){
    float x1,x2,y1,y2,z1,z2;
    float dis;
    printf("Pour calculer la distance entre deux points \n");
    printf("entrer les cordonnées suivantes : \n");
    printf("x1 : ");
    scanf(" %f",&x1);
    printf("x2 : ");
    scanf(" %f",&x2);
    printf("y1 : ");
    scanf(" %f",&y1);
    printf("y2 : ");
    scanf(" %f",&y2);
    printf("z1 : ");
    scanf(" %f",&z1);
    printf("z2 : ");
    scanf(" %f",&z2);

    dis = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2) + pow((z2-z1), 2));

    printf("la distance entre les deux points est : %.2f",dis);
    return 0;
}