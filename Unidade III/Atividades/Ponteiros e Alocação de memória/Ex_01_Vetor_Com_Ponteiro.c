 // FILE: Ex_01_Vetor_Com_Ponteiro.c
 // TITLE: Vetor com alocação de memoria usando ponteiro
 // SUBMITTED BY: Ítalo Manzine
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: April 15, 2021
 //
 // PURPOSE:
 // Esse programa gera um vetor com tamnho definido pelo usuário e alocação de 
 // memória usando ponteiro para a variável Vptr
 //
 // OVERALL METHOD:
 // The list of general tasks is:
 // 1. Print text
 // 2. Scan var
 // 3. Print result
 //
 // FUNCTIONS: 
 //
 // INCLUDED FILES:
 // stdio.h
 // stdlib.h
 //
 // DATA FILES: none

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vPtr; // Ponteiro
    int arraySize;
    int i;
    
    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &arraySize);
    
    // Alocação de memória
    vPtr = (int*) malloc(arraySize*sizeof(int));
    
    // Entrada de dados
    printf("\nEntrada de dados: \n");
    for (i=0; i<arraySize; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &vPtr[i]);
    }
    
    // Saída de dados
    printf("\n\nSaída de dados: \n");
    for (i=0; i<arraySize; i++)
    {
        printf("v[%d] = %d\n", i, vPtr[i]);
    }

    return 0;
}
