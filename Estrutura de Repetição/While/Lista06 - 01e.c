#include <stdio.h>

int main () {

    // Declarando as variáveis.
    int i = 0;
    float num, sTotal = 0, cTotal = 0, media = 0;
    float numP = 0, numN = 0 , percentualP = 0, percentualN = 0;
    
    printf("\n---------- calculando a media aritmetrica ----------\nOBS: O programa somente ira entregar o resultado quando o numero informado for '0'\n");

    // Abrindo o laço de repetição para receber o input infinitamente até o usuário digitar "0".
    // Equanto "num" for diferente de "i", executa o bloco.
    while (num != i)
    {   
        // input do usuário.
        printf("\nInforme um numero: ");
        scanf("%f", &num);
        
        // Abrindo uma condiconal para verificando e atribuindo o input do usuário para realizar os próximos comandos.
        if (num == 0)
        {   

            break;

        } else if (num > 0)
        {   
            // Realizando o somatório das entradas do usuário.
            sTotal = sTotal + num ;
            cTotal = cTotal + 1 ;

                if (num < 0)
                {
                    numN = numN + 1;

                } else if (num > 0)
                {
                    numP = numP + 1 ;

                }
                
        } 

    }

    // Calculando a média aritmétrica.
    media =  sTotal / cTotal;

    // Calculando o percentual dos números positivos e negativos.
    percentualP = ( numP / (numP + numN) ) * 100;
    percentualN = ( numN / (numP + numN) ) * 100;

    // Output do resultado para o usuário.
    printf ("\nFim do algoritmo!");

    printf("\nMedia aritmetrica: %.2f", media);

    printf("\nTotal de numeros positivos: %.f", numP);

    printf("\nTotal de numero negativos: %.f", numN);
   
    printf("\nPercentual de numeros positivos: %.f", percentualP);

    printf("\nPercentual de numeros negativos: %.f", percentualN);

    return 0;
}