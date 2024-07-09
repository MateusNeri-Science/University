#include <stdio.h>

int main ()

{
	float pao, empada, valor, poupanca ;
	
	printf ("Informe a quantidade de paes vendidos: ") ;
	scanf ("%f", &pao) ;
	
	printf ("Informe a quantidade de empadas vendidas: ") ;
	scanf ("%f", &empada) ;
	
	valor = pao * 0.15 + empada * 2.50 ;
	poupanca = valor * 0.15 ;
	
	printf ("\nValor total vendido em reais: R$ %.2f", valor) ;
	printf ("\nValor da poupanpa em reais: R$ %.2f", poupanca) ;
	
	return 0;
}
