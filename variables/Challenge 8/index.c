#include <stdio.h>
#include <math.h>

int main (){
    float list[3],moy;
    int i =  0;
    do{
        printf("Pour trouver la moyenne géométrique\n");
        printf("Entrer la %d nombre : ",i+1);
        scanf(" %f",&list[i]);
        i++;
    }while ( i < 3 );

    moy = pow((list[0] * list[1] * list[2]),(1.0/3.0));

    printf("la Moyenne géométrique est : %.2f",moy);
    return 0;
}