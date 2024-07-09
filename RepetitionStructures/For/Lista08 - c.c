/*
Uma loja utiliza o código V para transação à vista e P para transação a prazo.
Faça um programa que receba código e valor de n transações, calcule e
mostre:
i) O valor total das compras à vista
ii) O valor total das compras a prazo c.
iii) O valor total das compras efetuadas
iv) O valor da primeira prestação das compras a prazo, sabendo-se que essas
serão pagas em três vezes
*/

#include <stdio.h>

int main () {

    int transacao = 0, i = 0, parcela = 0;
    float valor = 0, totalV = 0, totalP = 0, valorTotal = 0, valorParcela = 0;

    for (i = 1; i > 0; i++) {
        
        printf("\n[1] A Vista; [2] Prazo; [0]Encerrar;\nInforme o codigo de transacao: ");
        scanf("%d", &transacao);

        if (transacao == 1) {

            printf("Informe o valor da compra: ");
            scanf("%f", &valor);

            totalV += valor;

        } else if (transacao == 2) {

            printf("Informe o valor da compra: ");
            scanf("%f", &valor);

            printf("Divide em ate 3 vezes\nInforme quantas parcela: ");
            scanf("%d", &parcela);

            switch (parcela)
            {
            case 1:
                valorParcela = valor / parcela;
                break;
            
            case 2:
                valorParcela = valor / parcela;
                break;

            case 3:
                valorParcela = valor / parcela;
                break;

            default:
                printf("Numero de parcela invalido!");
                break;
            }

            totalP += valor;

        } else {

            break;
            
        }

    }

    valorTotal = totalP + totalV;

    printf("\nO valor total das compras a vista: %.2f", totalV);
    printf("\nO valor total das compras a prazo: %.2f", totalP);
    printf("\nO valor total das compras: %.2f", valorTotal);
    printf("\nO valor da primeira prestacao das compras a prazo: %.2f", valorParcela);

    return 0;
}