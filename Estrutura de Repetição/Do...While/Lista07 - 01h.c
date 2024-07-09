#include <stdio.h>
int main () {

    int i = 1, num, nume = 0, den = 0;
    float soma = 0, fat = 1;
    
    do {

        printf("informe um numero inteiro maior que 5: ");
        scanf("%d", &num);
    
    } while (num <= 5);

    
    do {

        nume = 2 * i - 1;
        den = 2 * i;
        i++;

    } while (i <= num);
                      
    do {

        fat *= i;
        i++;

    
    } while (i <= den);


    soma = soma + nume / fat;

    printf("O valor da soma considerando os primeiros %d termos e: %.2f\n", num, soma);

    return 0;
}