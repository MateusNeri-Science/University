/*
Faça um programa que receba a idade de dez pessoas e que calcule e mostre
a quantidade de pessoas com idade maior ou igual a 18 anos.
*/

#include <stdio.h>

int main () {


    int i, idade = 0, cont = 0;

    for (i = 1; i <= 10; i++) {

        printf("Informe a idade da %d pessoa: ", i);
        scanf("%d", &idade);

        if (idade >= 18)
        {
            cont++;
        }
        
    }

    printf("%d pessoas, possuem idade maior ou igual a 18 anos", cont);

    return 0;
}