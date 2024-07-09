/*
Faça um programa que receba um inteiro n (entre 1 e 9) e realize a seguinte 
impressão (Para n = 9): 
*/

#include <stdio.h>

int main () {

    int num = 0, i = 0, x = 0;
    
    do {

        printf("Digite um inteiro entre 1 e 9: ");
        scanf("%d", &num);

    } while (num < 1 || num > 9);

    i = 1;

    do {

        x = 1;

        do {

            printf("%d", i);
            x++;

        } while(x <= i);

        printf("\n");
        i++;

    } while(i <= num);

    return 0;
}