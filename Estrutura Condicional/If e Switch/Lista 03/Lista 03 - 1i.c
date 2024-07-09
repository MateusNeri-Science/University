#include <stdio.h>

int main () {

    int idade;

    printf ("\nInforme a idade do nadador para saber a categoria: ");
    scanf ("%d", &idade);

    if (idade >= 5 && idade <= 7){

        printf("\nClassificado na categoria Infantil A");

    } else if (idade >= 8 && idade <= 10){

        printf("\nClassificado na categoria Infantil B");

    } else if (idade >= 11 && idade <= 13){

        printf("\nClassificado na categoria Juvenil A");

    } else if (idade >= 14 && idade <= 17){

        printf("\nClassificado na categoria Juvenil B");

    } else if (idade >= 18){

        printf("\nClassifica na categoria Adulto");

    }

    return 0;
}