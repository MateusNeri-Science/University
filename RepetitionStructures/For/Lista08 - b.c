/*
Desenvolver um algoritmo que efetue a soma de todos os números ímpares que
são múltiplos de três e que se encontram no conjunto dos números de 1 até
500.
*/

#include <stdio.h>

int main () {

    int i;
    int num = 500, somaImpares = 0;

    for (i = 1; i <= num; i++) {

        if (i % 2 != 0)
        {
            if (i % 3 == 0)
            {
                somaImpares += i;
            }
            
        }
        
    }

    printf("\nSomatorio dos numeros impares mutiplos de 3: %d", somaImpares);

    return 0;
}