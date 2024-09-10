#include <stdio.h>

int main() {
    int num;
    printf("Entrer un nombre : ");
    scanf(" %d",&num);
    
    if (num < 0 ){
        printf("Nombre est Négatif.");
    }else if (num > 0){
        printf("Nombre est Possitif.");
    }else {
        printf("le Nombre est Zéro.");
    }

    return 0;
}