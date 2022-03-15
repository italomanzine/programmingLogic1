 // FILE: Ex_01_Fatorial_Recursivo.c
 // TITLE: Fatorial com recursão
 // SUBMITTED BY: Ítalo Manzine
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: March 06, 2021
 //
 // PURPOSE:
 // Esse programa calcula o fatorial de um nuúmero fornecido pelo usúario. 
 // O fatorial é feito utilizando recursividade da função.
 //
 // OVERALL METHOD:
 // The list of general tasks is:
 // 1. Print text
 // 2. Scan var
 // 3. Print result
 //
 // FUNCTIONS: 
 // int fatorial()
 //
 // INCLUDED FILES:
 // stdio.h
 //
 // DATA FILES: none
 
#include <stdio.h>

/* Declaração da função fatorial */

int fatorial (int n) // função que calcula o fatorial
{
    if(n <= 1)
    {
        return 1;
    } else
        {
            return n * fatorial(n - 1);
        }
}

int main()
{
    int numero; // Declaração variável local.
    
    printf("\n Digite um número: ");
    scanf("%d", &numero);
    
    if( numero >= 0)
    {
        printf ("\n %d! = %d \n", numero, fatorial(numero));
    } else
        {
            printf("\n Número inválido! \n");
        }
    

    return 0;
}