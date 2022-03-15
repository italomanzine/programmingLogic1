 // FILE: Ex_01_funcoesMaiorNumero.c
 // TITLE: Maior número com função
 // SUBMITTED BY: Ítalo Manzine
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: March 31, 2021
 //
 // PURPOSE:
 // Esse programa recebe dois números do usuário em uma função e retorna o maior 
 // valor.
 //
 // OVERALL METHOD:
 // The list of general tasks is:
 // 1. Print text
 // 2. Scan var
 // 3. Print result
 //
 // FUNCTIONS: 
 // max(int num1, int num2)
 //
 // INCLUDED FILES:
 // stdio.h
 //
 // DATA FILES: none
#include <stdio.h>

/* Declaração da função max */
int max(int primeiroNumero, int segundoNumero); 

int main()
{
    int a, b; // Declaração de variaveis primeiro e segundo numero
    int num_max;
    
    printf(" \n o programa retorna o maior dos dois numeros \n");
    printf(" \n digite o primeiro numero: ");
    scanf("%d", &a);
    printf(" \n digite o segundo numero: ");
    scanf("%d", &b);
    
    num_max = max(a, b);
    
    printf(" \n o maior numero e: %d\n", num_max );

    return 0;
}

//Declaração do corpo da função max
int max(int primeiroNumero, int segundoNumero)
{
    int result;
    
    if(primeiroNumero > segundoNumero)
    result = primeiroNumero;
    else 
    result = segundoNumero;
    
    return result;
}

