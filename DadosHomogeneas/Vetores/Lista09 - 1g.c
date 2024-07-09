#include <stdio.h>
#define CANDIDATOS 5

int main() {
    int i = 0, votos[CANDIDATOS];
    int votosNulos = 0, votosBrancos = 0, opcao = 0;
    int senha = 0; 

    for (i = 0; i >= 0; i++) {

        printf("\nDigite o numero do candidato (1 a %d), 0 para voto nulo ou -1 para voto em branco: ", CANDIDATOS);
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= CANDIDATOS) {

            votos[i] = opcao; 

        } else if (opcao == 0) {

            votosNulos++; 

        } else if (opcao == -1) {

            votosBrancos++; 

        } else {

            printf("Opção inválida!\n");

        }

        printf("Digite a senha[1234] para encerrar a votacao ou 0 para continuar: ");
        scanf("%d", &senha);

        if (senha == 1234) {

            break;

        }

    }

    printf("\nResultados da eleicao:\n");

    for (int i = 0; i < CANDIDATOS; i++) {

        printf("Candidato %d: %d votos\n", i + 1, votos[i]);

    }

    printf("Votos nulos: %d\n", votosNulos);
    printf("Votos brancos: %d\n", votosBrancos);
    

    return 0;
}
