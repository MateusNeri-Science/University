#include <stdio.h>

int main () {

    int vA, vB;

    printf("\nInforme o primeiro numero: ");
    scanf ("%d", &vA);

    printf("\nInforme o segundo numero: ");
    scanf ("%d", &vB);

    if (vA % vB == 0)
    {
        printf ("\n%d é divisivel por %d", vA, vB);
    } else
    {
        printf ("\n%d nao e divisivel por %d", vA, vB);
    }
    
    return 0;
}