#include <stdio.h>

void decimalABinary(int num){
    int bina[50];
    int i = 0;

    if (num == 0){
        printf("Code binaire : 0\n");
        return;
    }

    while (num > 0){
        bina[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Code binaire : ");
    for (int j = i-1; j >= 0; j--){
        printf("%d", bina[j]);
    }
   printf("\n");
}

void decimalAHexa(int num){
    printf("Code Hexadecimal : %X",num);
}

int main(){
    int nombre;
    printf("Entrer un nombre : ");
    scanf("%d", &nombre);
    
    decimalABinary(nombre);
    decimalAHexa(nombre);
    return 0;
}
