/*
Calcule o valor de E usando a série abaixo e considerando primeiro n primeiros 
termos, com n>5:  
E = 1 / 1! + 1 / 2! + 1 / 3! +...+ 1 / n! 
*/

#include <stdio.h>

int main() {
    int n;
    float e = 1.0, termo = 1.0;
    int i = 1;

    printf("Digite um valor para n (n > 5): ");
    scanf("%d", &n);

    if (n <= 5) {
        printf("O valor de n deve ser maior que 5.\n");
        return 1;

    } else {

        while (i <= n) {
            termo /= i;
            e += termo;
            ++i;

        }

    }

    

    printf("O valor de E para os primeiros %d termos é: %.2f\n", n, e);

    return 0;
}
