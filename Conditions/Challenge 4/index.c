#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,z;
    float partie1;
    float x1,x2;
    
    printf("calculatrice deuxième degrée\n");
    printf("__ X² + __ X + __ = __\n");
    
    printf("entrer le 1er chiffre fois X² : ");
    scanf(" %f",&a);
    printf("%.2f X² + __ X + __ = __\n",a);
    
    printf("entrer la 2ème chiffre fois X : ");
    scanf(" %f",&b);
    printf("%.2f X² %c %.2f X + __ = __\n",a,(b >= 0 ? '+' : '-'),(b >= 0 ? b : -b));
    
    printf("entrer la 3ème chiffre : ");
    scanf(" %f",&c);
    printf("%.2f X² %c %.2f X %c %.2f = __\n",a,(b >= 0 ? '+' : '-'),(b >= 0 ? b : -b),(c >= 0 ? '+' : '-'),(c >= 0 ? c : -c));
    
    printf("entrer le 4ème chiffre : ");
    scanf(" %f",&z);
    printf("%.2f X² %c %.2f X %c %.2f = %.2f\n",a,(b >= 0 ? '+' : '-'),(b >= 0 ? b : -b),(c >= 0 ? '+' : '-'),(c >= 0 ? c : -c),z);
    
    c = c + (-z);
    z = 0;
    printf("%.2f X² %c %.2f X %c %.2f = %.2f\n",a,(b >= 0 ? '+' : '-'),(b >= 0 ? b : -b),(c >= 0 ? '+' : '-'),(c >= 0 ? c : -c),z);
    partie1 = pow(b,2) - 4 * a * c;
    
    printf("partie %.2f\n",partie1);
    if( partie1 > 0 ){
        x1 = (-b + sqrt(partie1)) / (2 * a);
        x2 = (-b - sqrt(partie1)) / (2 * a);
        printf("L'équation possède deux solutions distinctes.\n X1 = %.2f , X2 = %.2f",x1,x2);
    }else if( partie1 == 0 ){
        x1 = -b / (2 * a);
        printf("L'équation possède une seule solution. X = %.2f",x1);
    }else{
        printf("L'équation ne possède aucune solution.");
    }
    return 0;
}