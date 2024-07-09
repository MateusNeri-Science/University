#include <stdio.h>

int main() {

    char letra;

    printf ("\nInforme uma letra: ") ;
    scanf ("%s", &letra) ;

    
    if (letra == 'a'|| letra =='e' || letra == 'i' || letra == 'o' || letra =='u') {

        printf("\nA letra informada e uma vogal") ;

    } else {

        printf("\nA letra informada e uma cosoante");
    }
    
    return 0;
}