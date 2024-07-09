
#include <stdio.h>

int main () {

    int vA, vB, vC;

    printf("\nInforme o primeiro numero: ");
    scanf ("%d", &vA);

    printf("\nInforme o segundo numero: ");
    scanf ("%d", &vB); 
    {
        vC = vB ;
        vB = vA ; 
        vA = vC ;

        printf("\nO valor de B (%d), Valor de A (%d).", vB, vA);

    }

    return 0;
}