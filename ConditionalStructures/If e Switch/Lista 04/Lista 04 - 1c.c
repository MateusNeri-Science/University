#include <stdio.h>

int main () {

    char nome [50];
    float n1, n2, n3, mediaA ;
    int falt ;

    printf ("Informe o seu nome: ");
    scanf ("%s", &nome);

    printf ("Informe a quantidade d faltas: ");
    scanf ("%d", &falt);

    if (falt > 20)
    {
        printf ("%s, voce esta reprovado por faltas.", nome);
        
    } else
    {   
        printf ("Informe a sua primeira nota: ");
        scanf ("%f", &n1);

        printf ("Informe a sua segunda nota: ");
        scanf ("%f", &n2);

        printf ("Informe a sua terceira nota: ");
        scanf ("%f", &n3);

        mediaA = n1 + n2 + n3 / 3  ;

        if ( mediaA < 7)
        {
            printf ("%s, sua media e %.2f, ou seja, voce esta reprovado.", nome, mediaA);
        } else
        {
            printf ("%s, sua media e %.2f, ou seja, voce esta aprovado.", nome, mediaA );
        }
        
    } 
    
    return 0;
}