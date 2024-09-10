#include <stdio.h>

int main(){
    int age;
    char nom[20],prenom[25],email[100],sex[20];

    printf("Entrer votre nom : ");
    scanf(" %s",nom);
    printf("Entrer votre prénom : ");
    scanf(" %s",prenom);
    printf("Entrer votre age : ");
    scanf(" %d",&age);
    printf("Entrer votre sex : ");
    scanf(" %s",sex);
    printf("Entrer votre email : ");
    scanf(" %s",email);

    printf("Bonjour, %s %s, vous avez %d, et vous ete %s, avec email : %s ",nom,prenom,age,sex,email);
    return 0;
}