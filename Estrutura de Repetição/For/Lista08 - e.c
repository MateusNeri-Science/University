/*Calcula e escreve a soma dos n primeiros termos da série, com n>3*/

#include <stdio.h>

int main() {

    int n = 0, i = 0;
    float soma = 0, num = 0, deno = 0, t = 0;

    do {   

        printf("Digite o valor de n (maior que 3): ");
        scanf("%d", &n);

    } while (n <= 3);
                      
    for(i = 1; i <= n; i++) {

        num = 2 * i - 1;
        deno = i;      
        t = num / deno;

        if (i % 2 == 0){

            soma = soma - t;
        
        } else {

            soma = soma + t;

        }

    }

    printf("A soma dos %d primeiros termos e: %.2f\n", n, soma);

    return 0;
}
