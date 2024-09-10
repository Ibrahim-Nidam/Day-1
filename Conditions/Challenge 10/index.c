#include <stdio.h>

void entrerDate (int *jour,int *mois,int *annee){
    
    do{
        printf("entrer un jour : ");
        scanf(" %d",jour);
    } while (*jour<= 0 || *jour > 31);
    
    
    printf("La date : %d / __ / ____\n",*jour);
    
    do{
        printf("entrer un Mois : ");
        scanf(" %d",mois);
        
    }while (*mois<= 0 || *mois > 12);
    
    printf("La date : %d / %d / ____\n",*jour,*mois);
    
    printf("entrer une année : ");
    scanf(" %d",annee);
    
    printf("\n");
    printf("entrer un date : %d / %d / %d\n",*jour,*mois,*annee);
    
}

void changerForm(int jour,int mois,int annee){
    const char *months[]={
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    printf("La nouvelle forme du Date est : %d - %s - %d",jour,months[mois - 1],annee);
}

int main() {
    int jour,mois,annee;
    
    entrerDate(&jour, &mois, &annee);
    changerForm(jour,mois,annee);
    
    return 0;
}