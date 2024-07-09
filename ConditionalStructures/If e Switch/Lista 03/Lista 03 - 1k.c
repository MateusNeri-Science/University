#include <stdio.h>

int main () {

    float pItem, pTotal;
    int cod, qtd;

    printf ("\nInforme o que item que deseja comprar: ");
    scanf ("%d", &cod);

    switch (cod)
    {
        case 100:
            pItem = 1.20;
            printf("Misto quente!\n");
            break;
    
        case 101:
            pItem = 1.30;
            printf("Cachorroto quente!\n");
            break;

        case 102:
            pItem = 1.50;
            printf("Bauru!\n");
            break;

        case 103:
            pItem = 1.20;
            printf("Hamburger\n");
            break;

        case 104:
            pItem = 1.30;
            printf("Cheeseburguer!\n");
            break;
        
        case 105:
            pItem = 1.00;
            printf("Refrigerante!\n");
            break;

        default:
            pItem = 0;
            printf ("Codigo invalido");
            break;
    }

    if (pItem != 0) {

        printf ("\nInforme a quantidade que deseja comprar: ");
        scanf ("%d", &qtd);

        pTotal = qtd * pItem ;
        
        printf ("\nValor total do pedido: %.2f", pTotal) ;

    } else {

        printf ("O programa sera fechada! \n");

    }

    return 0;
}