 // FILE: Ex_12_lista_04.c
 // TITLE: Vetor com alocação de memoria usando ponteiro
 // SUBMITTED BY: Ítalo Manzine
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: April 29, 2021
 //
 // PURPOSE:
 // Esse programa gera dois vetores com tamanho definido pelo usuário e alocação de
 // memória usando ponteiro para a variável aPtr, bPtr e cPtr, sendo que o vetor C
 // é formado pelos números pares do Vetor A e B.
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

//  Declaração de funções

void printVetor(int v[], int n);
int contadorPar(int x[], int y[], int n, int m);

// Main

int main()
{
    int *aPtr, *bPtr, *cPtr;
    int size_a, size_b, size_c;
    int i, j = 0, k = 0;

    // Alocando o vetor A.
    printf("\n Informe o tamanho do vetor A: ");
    scanf("%i", &size_a);

    aPtr = (int*) malloc(size_a*sizeof(int));

    printf("\n Elementos do vetor A. \n");
    for (i = 0; i < size_a; i++)
    {
        printf("\n A[%i] = ", i);
        scanf("%i", &aPtr[i]);
    }

    // Alocando o vetor B.
    printf("\n Informe o tamanho do vetor B: ");
    scanf("%i", &size_b);

    bPtr = (int*) malloc(size_b*sizeof(int));

    printf("\n Elementos do vetor B. \n");
    for (i = 0; i < size_b; i++)
    {
        printf("\n B[%i] = ", i);
        scanf("%i", &bPtr[i]);
    }

    // Alocando o vetor C
    size_c = contadorPar(aPtr, bPtr, size_a, size_b);

    cPtr = (int*) malloc(size_c*sizeof(int));

    for (i = 0; i < size_a; i++)
    {
        if (aPtr[i] % 2 == 0)
        {
            cPtr[j] = aPtr[i];
            j++;
        }
    }

    k = j;

    for (i = 0; i < size_b; i++)
    {
        if (bPtr[i] % 2 == 0)
        {
            cPtr[k] = bPtr[i];
            k++;
        }
    }

    // Saída de dados
    printf("\n\n Vetor A = ");
    printVetor(aPtr, size_a);

    printf(" Vetor B = ");
    printVetor(bPtr, size_b);

    printf(" Vetor C = ");
    printVetor(cPtr, size_c);

    free(aPtr);
    free(bPtr);
    free(cPtr);

    return 0;
}

//Imprime o Vetor

void printVetor(int v[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%i  ", v[i]);
    }
    printf("\n\n");

    return;
}

// Conta a quantidade de elementos pares no vetor

int contadorPar(int x[], int y[], int n, int m)
{
    int i, j, contadorPar_a = 0, contadorPar_b = 0;

    for (i = 0; i < n; i++)
    {
        if (x[i] % 2 == 0)
        {
            contadorPar_a++;
        }
    }

    for (j = 0; j < m; j++)
    {
        if (y[j] % 2 == 0)
        {
            contadorPar_b++;
        }
    }

    return contadorPar_a + contadorPar_b;
}
