#include <stdio.h>

int main() {
    int num1,num2,somme;
    printf("entrer le 1er nombre : ");
    scanf(" %d",&num1);
    printf("entrer la 2eme nombre : ");
    scanf(" %d",&num2);

    if(num1 >= 0 && num2 >= 0){
        if(num1 == num2){
            num1 *= 3;
            printf("La somme est %d",num1);
        }else{
            somme = num1 + num2;
            printf("La somme est %d",somme);
        }
    }else {
        printf("entrer des nombres entiers. merci!");
    }
    return 0;
}