#include <stdio.h>
#define TAM 10

int main () {
	
	int i = 0;
	float vetX[TAM], vetY[TAM], produtoEscalar = 0;
	
	for(i = 0; i < TAM; i++) {
		printf("\nInforme o valor do vetorX[%d]= ", i);
		scanf("%f", &vetX[i]);
		
	}
	
	for(i = 0; i < TAM; i++) {
		
		printf("\nInforme o valor do vetorY[%d] = ", i);
		scanf("%f", &vetY[i]);
		
	}
	
	for (i = 0; i < TAM+TAM; i++) {
		
		produtoEscalar += vetX[i]*vetY[i];	
	}
	
	printf("\nprdutoEscalar = %.2f", produtoEscalar);
	
	return 0;
}
