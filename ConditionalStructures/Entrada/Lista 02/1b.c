#include <stdio.h>

int main ()

{
	float a, b, c;
	
	printf ("Informe o valor de A: ") ;
	scanf ("%f", &a) ;
	
	printf ("Informe o valor de B: ") ;
	scanf ("%f", &b) ;
	
	c = b ;
	b = a ;
	a = c ;
		
	printf ("\nNovo valor de A: %.2f", a) ;
	
	printf ("\nNovo valor de B: %.2f", b) ;
	
	return 0;
}
