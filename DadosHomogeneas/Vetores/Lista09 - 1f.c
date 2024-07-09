/*
Leia dois vetores de 10 posições e calcule um terceiro vetor contendo, nas 
posições pares os valores do primeiro e nas posições impares os valores do 
segundo. 
*/

#include <stdio.h>
#define TAMX 10
#define TAMY 10
#define TAMR 20

int main() {

    int vetX[TAMX], vetY[TAMY], vetR[TAMR], i = 0;

    for (i = 0; i < TAMX; i++) {
 
        printf("Informe o valor dos primeiros vetores[%d]: ", i);
        scanf("%d", &vetX[i]);

    }

    printf("\n");

    for (i = 0; i < TAMY; i++) {

        printf("Informe o valor dos segundos vetores[%d]: ", i);
        scanf("%d", &vetY[i]);

    }

    for (i = 0; i < TAMR; i++) {
        
        if (i % 2 == 0) {

            vetR[i] = vetX[i];

        } else {

            vetR[i] = vetY[i];

        }
        
    }
    
    for (i = 0; i < TAMR; i++) {

        printf("\nO terceiro vetor[%d] = %d", i,  vetR[i]);
    }
    

    return 0;
}