#include <stdio.h>

int main () {

    // Declarando as variaveis
    int i;
    int num;

    // input do usuario
    printf("Informe o numero inteiro: ");
    scanf("%d", &num);

    // Se num for menor igual a 1, vai exercutar o bloco abaixo
    if (num <= 1 )
    {
        printf("\no numero informado nao e primo");

    // Se não, vai exercutar o bloco abaixo
    } else {
        
        i = 2;

        // Enquanto i for menor igual a num divido por 2, vai repetir o bloco abaixo
        while (i <= num / 2)
        {   
            // Se num dividido por 1 tiver resto 0, vai imprimir a informação que o numero não é primo
            if (num % i == 0)
            {
                printf("\n%d nao e primo\n", num);
            }

            i++;
        }

        printf("\n%d e primo", num);

    }

    return 0;
}