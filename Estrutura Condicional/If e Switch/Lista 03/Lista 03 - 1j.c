#include <stdio.h>

int main () {

    float salarioB, salarioL, dependentes, descINSS, auxilioP = 40, auxilioR = 100;
    char nome [100] ;


    printf ("\nCalcule o seu salario liquido, informe alguns dados abaixo.\n");

    printf("\nInforme o seu nome: ");
    scanf("%s", &nome);

    printf("\nInforme o seu salario bruto: ");
    scanf("%f", &salarioB);

    printf("\nInforme o numero de dependentes: ");
    scanf("%f", &dependentes);

    if (salarioB >= 0 || salarioB <= 500) 
    {
        descINSS = salarioB * 0.07;

    } else if (salarioB >= 501 || salarioB <= 900) 
    {
        descINSS = salarioB * 0.09 ;

    } else if (salarioB >= 900)
    {
        descINSS = salarioB * 0.11 ;
    }

    salarioL = salarioB - descINSS + (15 * dependentes) + auxilioP + auxilioR;

    printf ("\n%s, o seu salario liquido e R$ %.2f", nome, salarioL);

    return 0;
}