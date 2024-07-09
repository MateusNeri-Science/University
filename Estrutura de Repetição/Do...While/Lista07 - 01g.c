/*Calcula e escreve a soma dos n primeiros termos da série, com n>3*/

#include <stdio.h>

int main () {

    int num = 0, sinal = 1, i = 1;
    float soma = 0;

    do {

        printf("Digite um valor inteiro maior que 3: ");
        scanf("%d", &num);

    } while (num <= 3);

    do {

        soma += sinal * (1.0 / i);
        sinal *= -1; 

        i++;

    } while (i <= num );

   
    printf("A soma dos %d primeiros termos da serie e: %.2f\n", num, soma);

    return 0;
}
