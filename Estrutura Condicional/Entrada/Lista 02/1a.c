#include <stdio.h>

int main ()

{
	float vmedia, distancia, tempo;
	
	printf ("\nInforme a distancia percorrida em KM: ");
	scanf ("%f", &distancia);
	
	printf ("Informe o tempo em HORAS: ");
	scanf ("%f", &tempo);
	
	vmedia = distancia / tempo;
	
	printf ("\nA velocidade media do veiculo e: %.2f", vmedia);
	
	
	return 0;

}
