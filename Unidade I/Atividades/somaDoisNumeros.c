 // FILE: somaDoisNumeros.c
 // TITLE: Soma de dois números em C
 // SUBMITTED BY: Ítalo Manzine
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: February 26, 2021
 //
 // PURPOSE:
 // Esse programa vai somar dois números informados pelo usuário
 //
 // OVERALL METHOD:
 // The list of general tasks is:
 // 1. Print text
 // 2. Scan var
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
    int primeiroNumero, segundoNumero;
    int soma;

    printf("Informe o primeiro número: ");
    scanf("%i", &primeiroNumero);
    printf("Informe o segundo número: ");
    scanf("%i", &segundoNumero);

    soma = primeiroNumero+segundoNumero;

    printf("\n O resultado da soma entre %i e %i é %i \n",primeiroNumero, segundoNumero, soma);
    
    system("PAUSE");
    return 0; 
 }