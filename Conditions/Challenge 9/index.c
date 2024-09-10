#include <stdio.h>

int main() {
    int ascii;
    char cara;
    printf("entrer un caractère : ");
    scanf(" %c",&cara);
    
    ascii = cara;
    
    if (ascii >= 97 && ascii <= 122 || ascii >= 65 && ascii <= 90){
        if(ascii >= 97 && ascii <= 122){
            printf("La lettre est Minuscule");
        }else{
            printf("La lettre est Majuscule");
        }
    }else{
        printf("Cette Caractère ne fait pas partie du l'alphabet.");
    }

    return 0;
}