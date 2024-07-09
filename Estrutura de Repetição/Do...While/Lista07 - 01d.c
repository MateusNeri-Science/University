/*
Faça um algoritmo que leia vários números e informe quantos desses números 
entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido o algoritmo 
deverá cessar sua execução.  
*/

#include <stdio.h>

int main () {

    int num = 0, cont = 0;

    do {
        
        printf ("Informe um numero: ");
        scanf("%d", &num); 
        
        printf("Deseja continuar? [1]Sim ou [0]Nao \n");
        scanf("%d", &num);

        if (num == 0) {

            break;

        } else {

            if (num > 100 && num < 200) {

                cont++;
            
            }
        }
        
        
    } while (num != 0);
    
    printf("Quantidade de numeros entre 100 e 200: %d", num);

    return 0;

}
