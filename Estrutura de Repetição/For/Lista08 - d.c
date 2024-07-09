/*Faça um algoritmo que mostre todos os divisores dos números que estão no 
intervalo fechado de X a Y.*/

#include <stdio.h>

int main() {

    int x, y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    do
    {
        printf("Digite o valor de Y: ");
        scanf("%d", &y);

    } while (x > y || y < x);
    
    
    for (int i = x; i <= y; i++) {

        printf("Divisores de %d: ", i);

        for (int j = 1; j <= i; j++) {

            if (i % j == 0) {

                printf("%d ", j);

            }
        }
        printf("\n");
    }

    return 0;
}