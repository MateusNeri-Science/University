#include <stdio.h>

int main () {

    int num, x, y, z;

    printf ("Informe um numero do tipo inteiro (XXX): ");
    scanf ("%3d", &num );

    x = num / 100 ;
    y = (num % 100) / 10;
    z = num % 10 ;

    printf ("\nCentena: %d\nDezena: %d\nUnidade: %d", x, y, z);

    return 0;
}