#include <stdio.h>

int main ()

{
	float salario, percentual ;
	
	printf ("Informe seu salario mensal:") ;
	scanf ("%f", &salario) ;
	
	printf ("Informe o percentual de reajuste:") ;
	scanf ("%f", &percentual) ;
	
	salario = salario + ((salario * percentual) / 100 ) ;
	
	printf ("O valor do novo salario e: %.2f", salario) ;
	
	return 0 ;
}
