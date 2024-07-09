/*Faça um programa que leia 10 valores reais e os apresente na ordem inversa 
entrada.*/

#include <stdio.h>
#define TAM 10

int main () {

    int vet[TAM], i = 0;

    for (i = 0; i < TAM; i++) { 

        printf("\nInforme o valor de Vet[%d]: ", i);
        scanf("%d", &vet[i]);

    }

    printf("Ordem inversa");

    for (i = TAM - 1; i >= 0; i--) {
        
        printf("\nVet[%d] = %d", i, vet[i]);

    }
    
    
    return 0;
}

