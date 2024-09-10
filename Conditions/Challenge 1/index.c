#include <stdio.h>

int main() {
    int num,quel;
    printf("entrer un nombre : ");
    scanf("%d",&num);
    
    quel = num % 2;
    if(quel == 0){
        printf("nombre et pair.");
    }else{
        printf("nombre est impaire.");
    }

    return 0;
}