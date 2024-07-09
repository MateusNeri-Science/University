#include <stdio.h>

int main()

{
	float eleitores, brancos, nulos, validos ;
	
	printf ("Este algoritmo visa calcular o percentual dos votos ocorridos durante as eleicoes! \n") ;
	
	printf ("\nInforme o numero total de eleitores:") ;
	scanf ("%f", &eleitores) ;
	
	printf ("\nInforme o numero de votos brancos:") ;
	scanf ("%f", &brancos) ;
	
	printf ("\nInforme o numero de votos nulos:") ;
	scanf ("%f", &nulos) ;
	
	printf ("\nInforme o numero de votos validos:") ;
	scanf ("%f", &validos) ;
	
	validos = (validos/eleitores) * 100 ;
	
	brancos = (brancos/eleitores) * 100 ;
	
	nulos = (nulos/eleitores) * 100 ; 
	
	printf ("\nConforme dados da eleicao, segue o percentual de votos validos: %.2f %", validos) ;
	printf ("\nConforme dados da eleicao, segue o percentual de votos brancos: %.2f %", brancos) ;
	printf ("\nConforme dados da eleicao, segue o percentual de votos nulos: %.2f %", nulos) ;
	
	return 0 ;
	
}
