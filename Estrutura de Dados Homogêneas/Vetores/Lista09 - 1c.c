/*
Faça um programa que leia 15 números inteiros, armazene-os em um vetor, 
solicite um valor de referência inteiro e: 
• imprima os números do vetor que são maiores que o valor referência 
• retorne quantos números armazenados no vetor são menores que o valor de 
referência 
• retorne quantas vezes o valor de referência aparece no vetor
*/

#include <stdio.h>
#define TAM 15

int main() {

    int vet[TAM], i, num = 0, cont = 0;

    printf("\nInforme um valor inteiro para referencia: ");
    scanf("%d", &num);

    for (i = 0; i < TAM; i++) {
        
        printf("\nInforme um valor inteiro do vetor[%d]: ", i+1);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < TAM; i++) {

        if (vet[i] > num) {

            printf("\nMaiores = %d", vet[i]);

        } else if (vet[i] < num) {
            
            printf("\nMenores = %d", vet[i]);

        } else if (vet[i] == num) {
            
            cont++;

        }
        
    }
    
    printf("\nQuantas vezes o valor de referencia aparece no vetor: %d vezes", vet[i]);

    return 0;
}