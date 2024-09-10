#include <stdio.h>

int main(){
    float list[3];
    int i=0;
    float moy,total;
    int ponde[] = {2,3,5};

    do{
        printf("entrer la %d nombre : ",i);
        scanf(" %f",&list[i]);

        i++;
    }while(i < 3);
    
    int size = sizeof(list)/sizeof(list[0]);

    for (int i = 0 ; i < size;i++){
        total += list[i] * ponde[i];
    }

    moy = total / 10;

    printf("La moyenne pondérée : %.2f",moy);

    return 0;
}