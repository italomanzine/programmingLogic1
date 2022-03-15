 // FILE: prova_02_ex_04.c
 // TITLE: Exercício 04 da prova 02 de Linguagem de Programação I 
 // SUBMITTED BY: Ítalo Manzine
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: May 11, 2021
 //
 // PURPOSE:
 /*
 Criar um vetor A com 12 elementos do tipo int.
	a) Criar um vetor C contendo somente os elementos pares e negativos do vetor A usando alocação dinâmica da memória
    b) Calcular a soma dos elementos do vetor A e vetor C
 */
 //
 // OVERALL METHOD:
 // The list of general tasks is:
 // 1. Declaração das variaveis
 // 2. Inicia o vetor A e C
 // 3. Realiza a soma dos vetores A e C
 // 4. Imprime os resultados
 //
 // FUNCTIONS: none
 //
 // INCLUDED FILES:
 // stdio.h
 // stdlib.h
 // string.h
 //
 // DATA FILES: none
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    //Criado vetor A
 	int vetorA[12] = {1, -1, 2, -2, 3, -3, 4, -4};
 	//Criado Ponteiro C
 	int *vetorPtrC;
 	int j = 0;
	int valorTotalVetorA = 0;
	int valorTotalVetorC = 0;
	int valorTotal = 0;


 	//Criado Vetor do Ponteiro C (LETRA A DA QUESTÃO)
	vetorPtrC = (int*) malloc(12* sizeof(int));

    //For para percorer o vetorA
	for (int i = 0; i < sizeof(vetorA); i++)
	{
	    //Verificação para números negativos
	    if (((vetorA[i] % 2) == 0) && (vetorA[i] < 0 ))
	    {
	         //Atribuição do valor par para o vetorPtrC
            *(vetorPtrC + i) = vetorA[i];
	    }
	}

    // For para listar vetorPtrC
    printf("Vetor C: ");
	for (int i = 0; i < sizeof(vetorPtrC); i++)
	{
	   if(*(vetorPtrC + i) != 0)
	   {
		    printf("%d  ", *(vetorPtrC + i));
	   }
	}
	printf("\n");

	//Soma dos vetores (LETRA B DA QUESTÃO)
    for (int k = 0; k < 12; k++)
    {
       valorTotalVetorA = valorTotalVetorA + vetorA[k];
    }
    printf("\n Valor total do vetor A: %d ", valorTotalVetorA);

    for (int k = 0; k < sizeof(vetorPtrC); k++)
    {
        valorTotalVetorC = valorTotalVetorC + *(vetorPtrC + k);
    }
    printf("\n Valor total dos vetores: %d ", valorTotalVetorC);
    
    
    valorTotal = valorTotalVetorA + valorTotalVetorC;
    printf("\n Valor total dos vetores: %d ", valorTotal);
    
    
 return 0;
 
}
