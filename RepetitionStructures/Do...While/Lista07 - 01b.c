/*
Escreva um algoritmo que encontre o quinto número maior que 1000, cuja 
divisão por 11 tenha resto 5.
*/

#include <stdio.h>

int main () {

    int i = 1, x = 1000;

    do {

        x++;

        if (x % 11 == 5) {
            
            i++;

        }
        
    } while (i <= 5);
    
    printf("\nO quinto numero maior que 1000, cuja divisao por 11 o resto e 5: %d", x);

    return 0;
}