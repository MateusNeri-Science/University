#include <stdio.h>

int main ()

{
	float n1, n2, n3, media, rec;
	char nome[50] ;
	
	printf ("Informe o seu nome: ");
	scanf ("%s", &nome); 

	printf ("Informe sua primeiro nota: ");
	scanf ("%f", &n1); 
	
	printf ("Informe sua segunda nota: ");
	scanf ("%f", &n2); 
	
	printf ("Informe sua terceira nota: ");
	scanf ("%f", &n3); 
	
	media = ( n1 * 4 + n2 * 5 + n3 * 6) / 15;
	
	printf ("\n --------------------------------------------------------------------") ;
	if (media >= 7) {
		
		printf ("\nParabens %s, você foi aprovado (a) com media %.1f! Aproveite suas ferias!!", nome, media);
		
	} else if (media >= 4 && media < 7) {
		
		rec = 12 - media ;
		printf ("\n %s, sua media foi %.1f. Voce ficou em recuperacao.", nome, media) ;
		printf ()

	}

	return 0;
}
