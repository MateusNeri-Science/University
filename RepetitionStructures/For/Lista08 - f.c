/*Escreva um programa que receba as dimensões de uma matriz e escreva os seus 
elementos em função da linha e coluna.*/

#include <stdio.h>

int main () {

    int n = 0, m = 0, i = 0, j = 0;

    printf("\nCriacao de uma Matriz");
    do
    {
        printf("\nInforme a dimensao da linha da matriz: ");
        scanf("%d", &m);

        printf("Informe a dimensao da coluna da matriz: ");
        scanf("%d", &n);

    } while (n <= 0 || m <= 0);
    
    for (i = 1; i <= m; i++) {

        printf("\n");

        for (j = 1; j <= n; j++) {

            printf("a%d%d\t", i, j);

        }
    }
    
    return 0;
}