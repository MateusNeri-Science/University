/*
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando 
dados sobre o salário e número de filhos. A prefeitura deseja saber:    
• média do salário da população;
• média do número de filhos;  
• maior salário;  
• percentual de pessoas com salário até R$100,00.  
O final da leitura de dados se dará com a entrada de um salário negativo. 
*/

#include <stdio.h>

int main () {

 // Declarando as variáveis.
    int i = 0, c = 1, contS = 0, contSalarial = 0, contFilhos = 0;
    float numSalarial = 0, totalSalarial = 0, mediaSlarial = 0, maiorSalario = 0, pSalarial = 0;
    float numFilhos = 0, totalFilhos = 0, mediaFilhos  = 0;

 // Laço de repetição, equanto "i" for maior igual a "0", executa o bloco repetidamente.
    while (i >= 0 ) {

        printf("\nInforme o salario da %d pessoa: R$", c);
        scanf("%f", &numSalarial);

        // Condicional, se o "numSalarial" for menor que 0, o programa encerra.
        if (numSalarial < 0) {

            break;

         //Se não, "numSalarial" for maior que 0, executa o bloco.
        } else {

            if (numSalarial > maiorSalario) {

                maiorSalario = numSalarial;

            }

            totalSalarial = totalSalarial + numSalarial;
            contSalarial++;

            if (numSalarial >= 0 && numSalarial <= 100)
            {
                contS++;
            }
            
        }
         
        printf("Informe a quantidade de filhos da %d pessoa: ", c);
        scanf("%f", &numFilhos);

        // Condicional, se o "numSalarial" for menor que 0, o programa encerra.
        if (numFilhos < 0) {

            break;

         //Se não, "numFilhos" for maior que 0, executa o bloco.
        } else {

            totalFilhos = totalFilhos + numFilhos;
            contFilhos++;

        }

        // Contagem de pessoas para informa na pesquisa. Está no output inicial.
        c++;
    }
     
    // calculando a media dos input pelo usuário.
    mediaSlarial = totalSalarial / contSalarial;
    mediaFilhos = totalFilhos / contFilhos;

    // Calculando o percentual dos salários até R$ 100,00
    pSalarial = (contS / contSalarial) * 100; 
    
    // output dos resultados - Salario.
    printf("\nSomatorio total dos salarios: R$ %.2f\n", totalSalarial);
    printf("Contagem salarial: %d\n", contSalarial);
    printf("Media salarial: R$%.2f\n", mediaSlarial);
    printf("Maior salario: R$%.2f\n", maiorSalario);
    printf("Percentual de pessoas com salarios ate R$100,00: %.2f", pSalarial);

    // output dos resultados - Filhos.
    printf("\nSomatorio total de filhos: %.2f\n", totalFilhos);
    printf("Contagem de filhos: %d\n", contFilhos);
    printf("Media do numeros de filhos: %.2f", mediaFilhos);

    return 0;
}