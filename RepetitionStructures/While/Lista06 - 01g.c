/*
Calcula e escreve a soma dos n primeiros termos da série:  
soma=1/1 + 3/2 +5/3+7/4+... 
*/

#include <stdio.h>

int main() {
    int n;
    double soma = 0.0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int num = 1;
    int den = 1;

    while (num <= 2 * n - 1) {
        soma = soma + (double)num / den;
        num = num + 2;
        den++;
    }

    printf("A soma dos %d primeiros termos da serie é: %.6lf\n", n, soma);

    return 0;
}