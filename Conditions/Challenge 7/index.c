#include <stdio.h>
#include <ctype.h>


int main() {
    char lettre;
    int ascii;
    printf("entrer un lettre : ");
    scanf("%c",&lettre);
    if (isalpha(lettre)){
        ascii = lettre;
        
        if(ascii >= 65 && ascii <= 90){
            printf("La lettre entrer est Majuscule.");
        }else{
            printf("La lettre entrer est Miniscule.");
        }
        
    }else{
        printf("entrer un lettre s'il vous plait.");
    }
    
    return 0;
}