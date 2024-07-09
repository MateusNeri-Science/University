#include <stdio.h>

int main ()

{
	float a, b, d, p1, p2 ;	
	
	printf ("\nInforme o valor do extremo a: ") ;
	scanf ("%f", &a) ;
	
	printf ("Informe o valor do extremo b: ") ;
	scanf ("%f", &b) ;
	
	d = (b - a ) / 3 ; // Calculando o tamanho do intervalo e as partes iguais
	p1 = a + d ; // Calculado o primeiro ponto interno
	p2 = p1 + d ; // Calculado o segundo ponto interno
	
	printf ("\nO resultado da funcao do extremo a: f(%.2f) = %.2f", a , (3 * a + 1) / 2) ;
	
	printf ("\nO resultado da funcao do primeiro ponto interior: f(%.2f) = %.2f", p1, (3 * p1 + 1) / 2) ;
	
	printf ("\nO resultado da funcao do segundo ponto interior: f(%.2f) = %.2f", p2, (3 * p2 + 1) / 2) ;
	
	printf ("\nO resultado da funcao do extremo b: f(%.2f) = %.2f", b, (3 * b + 1) / 2 );
	
	
	return 0 ;  
}
