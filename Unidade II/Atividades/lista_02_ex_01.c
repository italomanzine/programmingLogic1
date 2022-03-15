 // FILE: lista_02_ex_01.c
 // TITLE: Vetor de 15 elementos com identificador de maior e menor elemento
 // SUBMITTED BY: Ítalo Manzine
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: March 15, 2021
 //
 // PURPOSE:
 // Esse programa cria um vetor de 15 elementos, identifica o maior e menor
 // elemento com suas respectivas posições.
 //
 // OVERALL METHOD:
 // The list of general tasks is:
 // 1. Declaration of variables
 // 2. Use repetition estructure SWITCH 
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
    //inicia as variaveis
    int vetor[15];
    int i;
    int maior, menor;
    int posicaoMaior, posicaoMenor;
    
    //inicia o vetor
    for(i = 0; i < 15; i++)
    {
        printf("Digite um valor para %i o vetor: ", i);
        scanf("%i", &vetor[i]);
    }
    
    /* 
    As variáveis, maior e menor, recebem inicialmente o valor
    do primeiro elemento do vetor, ou seja, A[0].
    */
    
    maior=vetor[0];
    posicaoMaior = 0;
    // teste condicional de maior e sua respectiva posição
    for (int i = 0; i < 15; ++i)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posicaoMaior = i;
        }
    }
    
    menor=vetor[0];
    posicaoMenor = 0;
    // teste condicional de menor e sua respectiva posição
    for (int i = 0; i < 15; ++i)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            posicaoMenor = i;
        }
    }
    
    // imprime o maior, menor e sua respectivas posições
    printf("\n\n Maior: %d - Posição: %d\n", maior, posicaoMaior);
    printf(" Menor: %d - Posição: %d", menor, posicaoMenor);
    
    return 0;
}


