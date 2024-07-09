#include <stdio.h>

int main () {

    float num1, num2, num3 ;

    printf ("\nInforme o primeiro numero do tipo inteiro: ") ;
    scanf ("%f", &num1) ;
    
    printf ("Informe o segundo numero do tipo inteiro: ") ;
    scanf ("%f", &num2) ;

    printf ("Informe o terceiro numero do tipo inteiro: ") ;
    scanf ("%f", &num3) ;

    if ( num1 > num2 && num1 > num3) {

        printf("\nO primeiro numero e o maior") ;

    }
    if( num2 > num1 && num2 > num3 ) {

        printf ("\nO segundo numero e o maior");

    }
    if( num3 > num1 && num3 > num2) {            

        printf ("\nO terceiro numero e o maior");

    }
    if ( num1 < num2 && num1 < num3) {

        printf("\nO primeiro numero e o menor") ;

    } 
    if (num2 < num1 && num2 < num3) {

        printf ("\nO segundo numero e o menor");

    } 
    if (num3 < num1 && num3 < num2) {            

        printf ("\nO terceiro numero e o menor");

    }

    return 0;

}