 // FILE: somaNumerosImpares.c
 // TITLE: Soma Numeros Impares de 0 a 100
 // SUBMITTED BY: Ítalo Manzine
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: March 8, 2021
 //
 // PURPOSE:
 // Esse programa vai somar todos números inteiros no intervalo de 0 a 100
 //
 // OVERALL METHOD:
 // The list of general tasks is:
 // 1. Declaration of variables
 // 2. Use repetition estructure WHILE 
 // 3. Print result
 //
 // FUNCTIONS: none
 //
 // INCLUDED FILES:
 // stdio.h
 //
 // DATA FILES: none

#include <stdio.h>

int main()
{
  int contador, somaImpares;

  contador = 0;
  somaImpares = 0;

  while (contador <= 100)
  {
    if (contador % 2 == 1)
    {
      somaImpares = contador+somaImpares;
    }
    contador++;
  }
  printf("A soma de todos os números interios impares no intervalo de 0 a 100 é: %d", somaImpares);
}