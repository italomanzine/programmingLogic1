// FILE: trabalho_02.c
 // TITLE: Trabalho 02 de Linguagem de Programação I
 // SUBMITTED BY: Ítalo Manzine & Rodrigo Di Bernadi
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: May 03, 2021
 //
 // PURPOSE:
 // O programa realiza a leitura de dados e armazena a informação do usuário
 // a respeito da satisfação do atendimento num arquivo externo .txt .
 // No programa é utilizado variáveis para assim ser feito o armazenamento dos 
 // dados. 
 //
 // OVERALL METHOD:
 // The list of general tasks is:
 // 1. Print text
 // 2. Scan var
 // 3. Print result
 //
 // FUNCTIONS: 
 // struct cadastro
 //
 // INCLUDED FILES:
 // stdio.h
 // string.h
 // stdlib.h
 //
 // DATA FILES: none
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    /*Declaração de função */
    struct cadastro
    {
        int nota;
        char nome[50];
        char genero[50];
        char idade[50];
    };
    
    int main()
    {
        
     struct cadastro *aPtr; // Ponteiro
        
        aPtr = ( struct cadastro *) malloc (sizeof (struct cadastro)); // alocação de memória
    
    /*Entrada de dados */
    printf ("\n Avaliação do atendimento! \n ");
    
    printf (" Nome: ");
    scanf (" %[^\n]%*c", aPtr -> nome);
    
    printf (" Genêro: ");
    scanf (" %[^\n]%*c", aPtr -> genero);
    
    printf (" Idade: ");
    scanf (" %[^\n]%*c", aPtr -> idade);
    
    printf (" Nota do atendimento de 0 a 10 \n sendo 0 insatisfeito e 10 satisfeito: ");
    scanf ("%d", &aPtr -> nota);
    while ( aPtr -> nota < 0 || aPtr -> nota > 10 ) {
        printf (" Erro! \n");
        printf (" Nota do Usuário: ");
        scanf ("%d", &aPtr -> nota);
    }

    
    printf ("\n __________ Cadastro __________ \n");
    printf (" nome: %s\n ", aPtr -> nome);
    printf (" Gender: %s\n ", aPtr -> genero);
    printf (" Usuário: %s\n ", aPtr -> idade);
    printf (" Nota: %d\n ", aPtr -> nota);
    
    
    
    FILE *filePtr;
    FILE *rfilePtr;
    int num, nota;
    char nome[50];
    char genero[50];
    char idade[50];
    
    
 
    filePtr = fopen ("cadastro.txt", "w"); //Criação arquivo .txt
   
    
    if ( filePtr == NULL) {
        printf ("\n ERRO! \n");
        return 1;
    }
    
    /*Seleção e gravação dos dados no arquivo cadastro.txt*/
    printf ("\n Deseja Gravar os dados em um arquivo? \n");
    printf("\n Digite: 1- Sim  0- Não \n");
    scanf(" %d", &num);
    while ( num < 0 || num > 1) {
        printf (" ERRO! \n");
        printf("\n Digite: 1- Sim  0- Não \n");
        scanf(" %d", &num);
    }
    
    if ( num == 1) {
        fprintf(filePtr, " %s\n", aPtr -> nome);
        fprintf(filePtr, " %s\n", aPtr -> genero);
        fprintf(filePtr, " %s\n", aPtr -> idade);
        fprintf(filePtr, " %d\n", aPtr -> nota);
    }
    
    fclose (filePtr);
    
    rfilePtr = fopen ("cadastro.txt", "r");
    
    while ( fscanf (rfilePtr, "%d", &aPtr -> nota) != EOF )
    {
        fgets (aPtr -> nome, 50, rfilePtr);
        fgets (aPtr -> genero, 50, rfilePtr);
        fgets (aPtr -> idade, 50, rfilePtr);
        fscanf (rfilePtr, "%d", &aPtr -> nota);
        
        printf ("\n Nome: %s",  aPtr -> nome);
        printf ("\n Genero: %s",  aPtr -> genero);
        printf ("\n Usuário: %s", aPtr -> idade);
        printf ("\n Nota: %d", aPtr -> nota);
    }
    
    fclose (rfilePtr);    
        
        return 0;
    }
