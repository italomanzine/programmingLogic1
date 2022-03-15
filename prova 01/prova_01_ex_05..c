 // FILE: prova_01_ex_05.c
 // TITLE: Exercício 05 da prova 01 de Linguagem de Programação I 
 // SUBMITTED BY: Ítalo Manzine
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: March 22, 2021
 //
 // PURPOSE:
 // Criar uma matriz A 3x3 e uma matriz B 3x3.
 // Preencher ambas as matrizes com números inteiros definidos pelo usuário.
 // a) Criar uma matriz C 3x3 com elementos definidos da seguinte forma:
 // aij, se aij >= bij
 // bij, se bij > aij
 // b) Calcular a quantidade de elementos pares em cada uma das matrizes A e B e
 // mostrar essa quantidade e apontar para matriz com a quantidade maior.
 //
 // OVERALL METHOD:
 // The list of general tasks is:
 // 1. Declaração das variaveis
 // 2. Inicia a matriz A fornecida pelo usuário
 // 3. Inicia a matriz B fornecida pelo usuário
 // 4. Cria a matriz C de acordo com as condições
 // 5. Calcula a quantidade de elementos pares nas matrizes A e B e aponta a 
 // matriz com a maior quantidade de elementos pares.
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
    int mat_A[3][3];
    int mat_B[3][3];
    int mat_C[3][3];
    int i, j;
    int quantidade_par_A;
    int quantidade_par_B;
    
    quantidade_par_A = 0;
    quantidade_par_B = 0;
    
    //incia a matriz A 
    printf("Digite os elementos da matriz A: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &mat_A[i][j]);
        }
    }
    
    //incia a matriz B 
    printf("Digite os elementos da matriz B: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Elemento [%i,%i]: ", i, j);
            scanf("%i", &mat_B[i][j]);
        }
    }  
    
    //imprime a matriz A 
    printf("\nMATRIZ A DIGITADA:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", mat_A[i][j]);
        }
        printf("\n");
    }
    
    //imprime a matriz B 
    printf("\nMATRIZ B DIGITADA:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", mat_B[i][j]);
        }
        printf("\n");
    }
    
    //verifica as condições de criação da matriz C 
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
                if (mat_A[i][j] >= mat_B[i][j])
                {
                    mat_C[i][j] = mat_A[i][j];
                }

                if (mat_A[i][j] < mat_B[i][j])
                {
                    mat_C[i][j] = mat_B[i][j];
                }
            
        }
        
    }
    
    //imprime a matriz C (LETRA A)
    printf("\nMATRIZ C GERADA:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", mat_C[i][j]);
        }
        printf("\n");
    }

    //verifica a quantidade de elementos pares na matriz A
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(mat_A[i][j] % 2 == 0)
            {
                quantidade_par_A++;
            }
        }
    }
    
    //verifica a quantidade de elementos pares na matriz B
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(mat_B[i][j] % 2 == 0)
            {
                quantidade_par_B++;
            }
        }
    }
    
    //imprime quantidades de elementos pares nas matrizes A e B (LETRA B)
    printf("\nQuantidade de elementos pares da matriz A é: %i\n", quantidade_par_A);
    printf("Quantidade de elementos pares da matriz B é: %i\n", quantidade_par_B);
    
    //verifica e imprime qual matriz possui mais elementos pares (LETRA B)
    if(quantidade_par_B > quantidade_par_A)
    {
        printf("Matriz B contém uma quantidade de elementos pares maior do que a matriz A");
    } else if(quantidade_par_A > quantidade_par_B)
        {
            printf("Matriz A contém uma quantidade de elementos pares maior do que a matriz B");
        } else 
            {
                printf("Matriz A contém a mesma quantidade de elementos pares do que a matriz B");
            }

    return 0;
}
