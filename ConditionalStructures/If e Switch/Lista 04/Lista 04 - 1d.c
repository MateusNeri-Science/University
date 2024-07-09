#include <stdio.h>

int main () {

    float qPaes, qBroas, vendas, poupar;

    printf("\nInforme a quantidade da paes vendidos: ");
    scanf("%f", &qPaes);

    printf("\nInforme a quantidade da broas vendidos: ");
    scanf("%f", &qBroas);

    if (qPaes < 0 || qBroas < 0)
    {
        printf ("\nInformacoes invalidas");

    } else if (qPaes == 0 || qBroas == 0)
    {
        printf ("\nInfelizmente nao ocorreu nenhuma venda neste dia.");

    } else {
        vendas = ((qPaes * 0.12) + (qBroas * 1.50));

        poupar = vendas * 0.10 ;

        printf ("\nO valor total de vendas do dia foi: R$ %.2f", vendas);

        printf ("\nO valor poupado: R$ %.2f", poupar);
    }
    
    return 0;
}
