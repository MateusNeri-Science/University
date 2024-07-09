/*
Leia um vetor de 15 posições e em seguida leia também dois valores X e Y 
quaisquer correspondentes a duas posições no vetor. Ao final seu programa 
deverá escrever a soma dos valores encontrados nas respectivas posições X e 
Y. 
*/

#include <stdio.h>
#define TAM 15

int main (){

    int vet[TAM], i = 0, numX = 0, numY = 0, somaXY = 0;

    for (i = 0; i < TAM; i++){

        printf("Informe o valor de vet[%d]: ", i);
        scanf("%d", &vet[i]);
            
    }
    
    do {

        printf("\nInforme o numero de X: ");
        scanf("%d", &numX);

    } while (numX < 0 || numX > TAM );
    

    do {

        printf("\nInforme o numero de Y: ");
        scanf("%d", &numY);

    } while (numY < 0 || numY > TAM );

    somaXY = vet[numX] + vet[numY];

    printf("\nA soma dos valores das posições X e Y = %d", somaXY);

    return 0;
}