/*
Foi feita uma pesquisa entre os habitantes de uma regiãoe coletados os dados 
de altura e sexo (1=masculino, 2=feminino, 3=outro) das pessoas. Faça um 
programa que leia 50 dados diferentes e informe:
•  a média de altura da população; 
•  a maior e a menor altura encontradas; 
•  a média de altura das mulheres;  
•  o percentual de homens na população.
*/

#include <stdio.h>

int main () {

    int i = 0, num;
    int sexo = 1, masc = 0, fem = 0, outro = 0;
    float altura, mediaAltura = 0, maiorAltura = 0, menorAltura = 0 ;
    float mediaFem = 0, percMasc = 0, somaFem = 0, somaMasc = 0, somaOutro = 0;

    do {

        printf("\n[1]Masculino, [2]Feminino, [3]Outro\nInforme o sexo: ");
        scanf("%d", &sexo);

        switch (sexo)
        {
            case 1:
                printf("Informe a altura [Em Metros]: ");
                scanf("%f", &altura);

                somaMasc += altura;
                masc++;

                break;

            case 2:
                printf("Informe a altura [Em Metros]: ");
                scanf("%f", &altura);

                somaFem += altura;
                fem++;

                break;

            case 3:
                printf("Informe a altura [Em Metros]: ");
                scanf("%f", &altura);

                somaOutro += altura;
                outro++;

                break;

            default:
                printf("\nCodigo invalido. Deseja continuar? [1]Sim ou [2]Não: \n");
                scanf("%d", &num);
                break;
        }

        if (altura >= maiorAltura){

            maiorAltura = altura;

        } else if (altura < maiorAltura || altura >= menorAltura) {

            menorAltura = altura; 
            
        }

        i++;

    } while (i <= 2);
    
    mediaAltura = (somaFem+somaMasc+somaOutro) / (fem+masc+outro);
    mediaFem = somaFem / fem;
    percMasc = (somaMasc / (somaFem+somaMasc+somaOutro)) * 100;

    printf("\nMaior altura: %.2f", maiorAltura);
    printf("\nMenor altura: %.2f", menorAltura);
    printf("\nAltura media: %.2f", mediaAltura);
    printf("\nMedia da altura feminina: %.2f", mediaFem);
    printf("\nPercentual masculino entre os habitantes: %.2f", percMasc);


    return 0;
}


    
