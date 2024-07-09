/*
Faça um programa que receba um número n e informe se ele é um número 
perfeito ou não. Dizemos que um número n é perfeito quando a soma dos seus 
divisores, exceto ele próprio é igual a n. 
*/

#include <stdio.h>

int main () {

    int num = 0, i = 1, somaNum = 0;

    printf("Informe um numero: ");
    scanf("%d", &num);

    do {

        if (num % i == 0) {

            somaNum += i;

        }
        i++;
    
    } while (i < num);

    if (somaNum == num)
    {
        printf("%d, e um numero perfeito", num);

    } else {

        printf("%d, nao e um numero perfeito", num);

    }

    return 0;
}