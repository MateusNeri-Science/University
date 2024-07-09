#include <stdio.h>

int main () {

    int num ;

    printf ("\nInforme um numero do tipo inteiro: ") ;
    scanf ("%d", &num) ;

    if (num > 0 ) {

        printf("\nO numero informado e positivo") ;

    } else if (num < 0) {

        printf("\nO numero informado e negativo") ;
    
    } else {

        printf ("\nO numpero informado e Zero") ;

    }

    return 0;
}