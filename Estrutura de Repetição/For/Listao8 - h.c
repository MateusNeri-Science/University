/*
José está aprendendo a jogar xadrez, mas tem dificuldade em saber para qual 
direção ele pode mover sua Torre. Escreva um programa que solicite ao José o 
número da linha e da coluna que indicam a posição de sua Torre. O programa 
deve imprimir quais são os possíveis movimentos da Torre.  

i) Utilize *-* para indicar uma casa para a qual a Torre não pode ser movida e *x* 
para indicar uma casa para a qual ela pode ser movida. 

ii) Utilize *o* para indicar a posição da torre.  

iii) O tabuleiro de xadrez é composto por 8 linhas e 8 colunas, e a Torre se 
move ortogonalmente, ou seja, pelas linhas (horizontais) e pelas colunas 
(verticais).
*/

#include <stdio.h>

int main() {

    int linha, coluna;

    printf("Digite a linha (1 a 8) da posição da Torre: ");
    scanf("%d", &linha);
    
    printf("Digite a coluna (1 a 8) da posição da Torre: ");
    scanf("%d", &coluna);

    // Imprime o tabuleiro com os movimentos possíveis
    for (int i = 1; i <= 8; i++) {

        for (int j = 1; j <= 8; j++) {

            if (i == linha || j == coluna) {

                if (i == linha && j == coluna) {

                    // Posição da Torre
                    printf("o "); 

                } else {

                    // Movimento possível
                    printf("x "); 
                }

            } else {

                // Não pode mover
                printf("- "); 
                
            }
        }

        printf("\n");

    }

    return 0;
}
