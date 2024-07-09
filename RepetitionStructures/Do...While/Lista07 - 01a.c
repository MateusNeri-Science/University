/*
Crie um algoritmo que o usuário entre com vários números inteiros e positivos. 
Imprima o produto dos números ímpares e a soma dos números pares. 
*/

#include <stdio.h>

int main () {

    int num = 0, flag = 0 ;
    int numPar = 0, numImp = 1;

    do {

        printf("Informe um numeros inteiro e positivo: ");
        scanf("%d", &num);
        
        printf("Deseja parar [0 para SIM] e [1 para NAO]: ");
        scanf("%d", &num);

        if (num == 0) {

            break;

        } else if (num >= 1){

            if (num % 2 == 1) {

                flag=1;
                numImp *= num;

            } else if (num % 2 == 0) {

                numPar += num;

            }

        }
        
    } while (num <0 || num !=0);

    if (flag) {

        printf("\nProduto dos numeros impares: %d", numImp);

    } else {

        printf ("\nProdutos dos numeros impares: 0");

    }

    printf("\nSomatorio dos numeros pares: %d", numPar);

    return 0;
}