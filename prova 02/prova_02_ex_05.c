 // FILE: prova_02_ex_05.c
 // TITLE: Exercício 05 da prova 02 de Linguagem de Programação I 
 // SUBMITTED BY: Ítalo Manzine
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: May 11, 2021
 //
 // PURPOSE:
 /*
 Criar uma matriz A com o tamanho mxm definido pelo usuário usando alocação dinâmica
 de memória.
    a) Copiar todos os elementos das linhas com índice par da matriz em um vetor B
    que deve ser criado usando alocação dinâmica de memória.
    b) Criar um vetor C contendo os maiores elementos de cada linha.
 */
 //
 // OVERALL METHOD:
 // The list of general tasks is:
 // 1. Declaração das variaveis
 // 2. Inicia a matriz A
 // 3. Cria as vetores B e C
 // 4. Imprime os resultados
 //
 // FUNCTIONS: 
 // contadorPar(int **v, int n)
 //
 // INCLUDED FILES:
 // stdio.h
 // stdlib.h
 //
 // DATA FILES: none
 
#include <stdio.h>
#include <stdlib.h>

int contadorPar(int **v, int n);

int main()
{
    int **APtr;
    int i, j, m, n;
    int *bPtr, tamanhoB = 0, k = 0;
    int *cPtr, maior;
    
    // Criando a Matriz A
    printf("\n Informe o tamanho (m) da Matriz A mxm: ");
    scanf("%i", &m);

    // Alocação de memoria para as linhas.
    APtr = (int**) malloc(m*sizeof(int*));

    printf("\n\n Entrada de Dados: \n");
    for (i = 0; i < m; i++)
    {
        // Alocação de memoria para as colunas.
        APtr[i] = (int*) malloc(m*sizeof(int));
        for (j = 0; j < m; j++)
        {
            printf("A[%i][%i] = ", i, j);
            scanf("%i", &APtr[i][j]);
        }
    }

//------------------------------------------------------------------
    // Criando o Vetor B
    tamanhoB = contadorPar(APtr, m);

    // Alocação dinâmica para o Vetor b
    bPtr = (int*) malloc(tamanhoB*sizeof(int));

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                bPtr[k] = APtr[i][j];
                k++;
            }
        }
    }

//------------------------------------------------------------------
    // Criando o Vetor C
    cPtr = (int*) malloc(m*sizeof(int));

    maior = APtr[0][0];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (APtr[i][j] > maior)
            {
                maior = APtr[i][j];
            }
        }
    cPtr[i] = maior;
    }
    

//------------------------------------------------------------------

    // Imprimindo a matriz A, vetor B e C
    printf("\n\n Matriz A: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%5d ", APtr[i][j]);
        }
        printf("\n");
    }

    printf("\n Vetor B: ");
    for (i = 0; i < tamanhoB; i++)
    {
        printf("%i ", bPtr[i]);
    }

    printf("\n\n Vetor C: ");
    for (i = 0; i < m; i++)
    {
        printf("%i ", cPtr[i]);
    }

    // Liberando memoria
    free(APtr);
    free(bPtr);
    free(cPtr);
    return 0;
}

// Contador para o vetor B
int contadorPar(int **v, int n)
{
    int i, j, contador = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                contador++;
            }
        }
    }

    return contador;
}