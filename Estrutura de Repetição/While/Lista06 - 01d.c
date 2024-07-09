#include <stdio.h>
#include <math.h> // Incluindo a biblioteca math.h para realizar a ponteciação

int main () {
    // Declarando as variáveis

    int i = 1;
    float num, num1, num2;

    // Abrindo o laço de repetição para receber os dados do usuário
    while (i <= 2) 
    {   
        // Inpunt do usuário
        printf ("\nInforme o %d valor do tipo inteiro e positivo: ", i);
        scanf ("%f", &num);

        // Abrindo uma concional para atribuir os dados do usuário
        if (num > num1 ) {

            num1 = num;

        } else if (num <= num1)
        {

            num2 = num;

        }

        i++;
    }

    // Output para o usuário dos dados inseridos
    printf ("\nO valor de X = %.2f e o valor de Y = %.2f", num1, num2);

    // Realizando o calculo da ponteciação
    num = pow (num1, num2);

    // Output do resultado para o usuário
    printf ("\nA exponeciacao de X e Y e, respectivamente: %.2f\n", num);

    return 0;
}