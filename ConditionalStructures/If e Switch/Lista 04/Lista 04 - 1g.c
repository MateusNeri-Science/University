#include <stdio.h>

int main ()
{
    int valor, n50, n20, n10, n5, n2, n1;

    printf("\nInforme o valor que deseja retirar: R$ ");
    scanf("%d", &valor);
    
    n50 = valor / 50;
    valor %= 50;

    n20 = valor / 20;
    valor %= 20;

    n10 = valor / 10;
    valor %= 10;

    n5 = valor / 5;
    valor %= 5;

    n2 = valor / 2;
    valor %= 2;

    n1 = valor / 1;
    valor %= 1;

    printf("\nDistribuicao de notas: \n");
    printf("R$ 50: %d\n", n50);
    printf("R$ 20: %d\n", n20);
    printf("R$ 10: %d\n", n10);
    printf("R$ 5: %d\n", n5);
    printf("R$ 2: %d\n", n2);
    printf("R$ 1: %d\n", n1);

    return 0;

}