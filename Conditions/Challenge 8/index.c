#include <stdio.h>

int main() {
    float note; 
    printf("Entrez la note que vous avez obtenue : ");
    scanf("%f", &note); 
    
    if (note >= 1 && note < 10) {
        printf("Vous avez recalé.");
    } else if (note >= 10 && note < 12) {
        printf("Vous avez la mention passable.");
    } else if (note >= 12 && note < 14) {
        printf("Vous avez la mention assez bien.");
    } else if (note >= 14 && note < 16) {
        printf("Vous avez la mention bien.");
    } else if (note >= 16 && note <= 20) {
        printf("Vous avez la mention très bien.");
    } else {
        printf("Entrez une note rationnelle.");
    }

    return 0;
}
