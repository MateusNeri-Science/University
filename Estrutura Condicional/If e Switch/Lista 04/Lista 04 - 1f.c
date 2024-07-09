#include <stdio.h>

int main () {

    int num;

    printf("\nInforme um numero do tipo inteiro: ") ;
    scanf("%d", &num);

    if (num > 0 ) 
    {
        printf("\nO numero informado e positivo") ; 

    } else if (num < 0) 
    {
        printf("\nO numero informado e negativo") ;
    }

    if (num % 2 == 0) 
    {
        printf("\nO numero informado e par") ;

    } else if (num % 2 != 0)
    {
        printf("\nO numero informado e impar") ;
    }
    
    return 0 ;
}