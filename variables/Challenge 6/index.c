#include <stdio.h>

int main(){
    float a,b,z;

    printf("entre le 1er nombre : ");
    scanf(" %f",&a);
    do{

    printf("entre le 2eme nombre : ");
    scanf(" %f",&b);
    }while(b <= 0);
    

    printf("a + b  = %.2f\n",z = a+b);
    printf("a * b  = %.2f\n",z = a*b);
    printf("a / b  = %.2f\n",z = a/b);
    printf("a - b  = %.2f\n",z = a-b);
    return 0;
}