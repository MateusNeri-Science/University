/*
Leia um vetor de 20 posições e em seguida um valor X qualquer. Seu programa 
deverá fazer uma busca do valor de X no vetor lido e informar a posição em que 
foi encontrado ou se não foi encontrado. 
*/

#include <stdio.h>
#define TAM 20

int main(){

    int vet[TAM], i = 0, numX = 0;

    for (i = 0; i < TAM; i++) {
        
        printf("\nInforme o valor do vetor[%d]: ", i+1);
        scanf("%d", &vet[i]);

    }

    printf("\nInforme o valor de X: ");
    scanf("%d", &numX);

    for (i = 0; i < TAM; i++) {

        if (numX == vet[i]) {

            printf("\nO valor de X = %d, esta no vetor[%d]", numX, i+1);

        } else {

            printf("\nO valor de X = %d, nao foi encontrado no vetor[%d]", numX, i+1);

        }
    }
    
    return 0;
}

