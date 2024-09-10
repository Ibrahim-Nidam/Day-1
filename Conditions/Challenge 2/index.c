#include <stdio.h>
#include <ctype.h>

int main() {
    char cara;
    printf("entrer un caractère : ");
    scanf("%c",&cara);
    
    switch(tolower(cara)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            printf("Le caractère est un voyelle.");
        break;
        default:
            printf("Le caractère n'est pas un voyelle.");
        break;
    }

    return 0;
}