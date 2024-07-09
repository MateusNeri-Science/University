#include <stdio.h>
#include <math.h>

int main ()

{
    float a, b, c, d, r, s ;
    
    printf ("Informe o valor inteiro de A: ") ;
    scanf ("%f", &a) ;

    printf ("Informe o valor inteiro de B: ") ;
    scanf ("%f", &b) ;

    printf ("Informe o valor inteiro de C: ") ;
    scanf ("%f", &c) ;

    r = pow((a + b),2) ;
    
    s = pow((b + c),2) ; 
	
	d = (r + s) / 2 ; 

    printf ("\nValor da expressao %.2f:", d) ;

    return 0 ;	
	
}
