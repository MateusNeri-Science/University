#include <stdio.h>
#define TAM 6

int main () {
	
	int vet[TAM], i, sTotal = 0, sPar = 0, qtdPar = 0, sImpar = 0, qtdImpar = 0, sPosPar = 0, sPosImpar = 0;
	float medTotal = 0, medPar = 0, medImpar = 0;
	
	for (i=0; i<TAM; i++){
		
		printf("\nDigite o valor de vet[%d]: ", i);
		scanf("%d", &vet[i]);
		
		sTotal = sTotal + vet[i];
		printf("\nSoma = %d", sTotal);//Print de verificação
		
		if (vet[i] % 2 == 0) {
		
			sPar = sPar + vet[i];
			qtdPar++;
			
			printf("\nsPar = %d", sPar);//Print de verificação
			printf("\nqtdPar = %d", qtdPar);//Print de verificação
			
		}else{
			
			sImpar = sImpar + vet[i];
			qtdImpar++;
			
			printf("\nsImpar = %d", sImpar);//Print de verificação
			printf("\nqtdImpar = %d", qtdImpar);//Print de verificação
		}
		
		if(i % 2 == 0){
			
			sPosPar = sPosPar + vet[i];
			
		}else {
			
			sPosImpar = sPosImpar + vet[i];
			
		}
		
	}
	
	medTotal = (float) sTotal/TAM;
	medPar = (float) sPar/qtdPar;
	medImpar = (float) sImpar/qtdImpar;
	
	printf("\nMedia Total: %.2f", medTotal);
	printf("\nMedia Par: %.2f", medPar);
	printf("\nPossicao Par: %d", sPosPar);
	printf("\nPossicao Impar: %d", sPosImpar);
	
	return 0;
}
