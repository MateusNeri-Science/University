#include <stdio.h>

int main () {

 // Declarando as varáveis
    int i = 1;
    float num, alturaMa = 0, alturaMe = 0;
    
    printf ("---------- Calculando a maior altura e menor altura do grupo ----------");

 // Abrindo um laço de repetição para ler a altura do grupo de pessoas
    while (i <= 15)
    {
        // input dos usuários
        printf ("Inform a altura da %d pessoa (Metros): ", i);
        scanf("%f", &num);

        // Se "num" for maior que 0, vai executar o bloco abaixo
        if (num > 0) 
        {
            // Se num for menor que alturaMa, vai atribuir a variável "num" a "alturaMa"
            if (num > alturaMa)
            {
                alturaMa = num; 

            // Se não, vai atribuir a variável "num" a "alturaMe"
            } else if (num < alturaMa)
            {
                alturaMe = num;

            } else {

                printf ("Altura Invalida");

            }

        // Se não, vai executar o bloco abaixo
        } else {

            printf ("\nAltura Invalida");

        }
        i++;
    }
    
    // output para o usuário
    printf("\nA maior altura do grupo em metros: %.2f", alturaMa);
    printf("\nA menor altura do grupo em metros: %.2f", alturaMe);

    return 0;
}