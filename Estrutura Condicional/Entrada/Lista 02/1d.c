#include <stdio.h>

int main ()

{
    float media, n1, n2, n3, p1, p2, p3 ;

    printf ("Informe sua primeira nota: \n") ;
    scanf ("%f", &n1) ;

    printf ("Informe sua segunda nota: \n") ;
    scanf ("%f", &n2) ;

    printf ("Informe sua terceira nota: \n") ;
    scanf ("%f", &n3) ;

    printf ("Informe o peso da primeira nota: \n") ;
    scanf ("%f", &p1) ;

    printf ("Informe o peso da segunda nota: \n") ;
    scanf ("%f", &p2) ;

    printf ("Informe o peso da terceira nota: \n") ;
    scanf ("%f", &p3) ;

    media = (n1 * p1 + n2 * p2 + n3 * p3) / p1 + p2 + p3 ;

    printf ("\nSua media foi %.2f", media) ;

    return 0 ;	
	
}
