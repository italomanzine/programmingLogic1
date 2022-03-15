 // FILE: prova_01_ex_04.c
 // TITLE: Exercício 04 da prova 01 de Linguagem de Programação I 
 // SUBMITTED BY: Ítalo Manzine
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: March 22, 2021
 //
 // PURPOSE:
 // Criar um vetor com 15 elementos e preencher ele com números inteiros definidos
 // pelo usuário.
 // a) Calcular a soma de todos os elementos pares do vetor.
 // b) Multiplicar por 10 todos os elementos do vetor que são iguais a um número k
 // fornecido pelo usuário.
 //
 // OVERALL METHOD:
 // The list of general tasks is:
 // 1. Declaração das variaveis
 // 2. Inicia o vetor fornecido pelo usuário
 // 3. Soma todos elementos pares do vetor
 // 4. Multiplica pelo numero k 
 // 5. Imprime os resultados
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
    int vet[15], i, soma, k;
    
    soma = 0;
    //inicia o vetor
    for (i = 0; i < 15; i++)
    {
        printf("Digite o valor para o elemento %i do vetor: ", i);
        scanf("%i", &vet[i]);
        if (vet[i] % 2 == 0) //verifica se o número digitado é par
        {
            soma = soma + vet[i]; //realiza a soma dos elementos pares
        }
    }
    
    //informa o vetor digitado para o usuário
    printf("\nO Vetor digitado foi: ");
    for (i = 0; i< 15; i++)
    {
        printf("%i ", vet[i]);
    }
    
    //Pede um número k do vetor para ser multiplicado por 10
    printf("\nDigite um numero do vetor para ser multiplicado por 10: ");
    scanf("%i", &k);
    for (i = 0; i < 15; i++)
    {
        if(k == vet[i])
        {
            vet[i] = vet[i] * 10;
        }
    }
    
    // LETRA A (Informa a soma dos elementos pares)
    printf("\nA soma dos elemento pares é: %i", soma);
    
    // LETRE B (Informa o novo vetor com elemento k multiplicado por 10)
    printf("\nO novo vetor com o número %i multiplicado por 10 é: ", k);
    for (i = 0; i < 15; i++)
    {
        printf("%i ", vet[i]);
    }

    return 0;
}

