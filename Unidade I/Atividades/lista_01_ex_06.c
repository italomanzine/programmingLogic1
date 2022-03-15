 // FILE: lista_01_ex_06.c
 // TITLE: Operação matematica entre dois números com switch
 // SUBMITTED BY: Ítalo Manzine e Rodrigo Di Bernardi
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: March 15, 2021
 //
 // PURPOSE:
 // Esse programa vai deixar o usuário escolher uma operação matematica (+,-,*,/)
 // e realizar uma conta com dois números informados pelo usuário.
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

#include<stdio.h>

int main()//inicio da operação
{
    //declaração de variaveis
    int n1, n2; //numeros a serem recebidos
    int so; //Soma
    int su; //subtração
    int mu; //multiplicação
    int di; //divisão
    int extrad;//resto da divisão
    int escolha;//escolha da operação
    
    printf("Escolha a operação : \n1-soma \n2-subtração \n3-multiplicação \n4-divisão \nOperação: ");//printf é o que será disponibilizado na tela
    scanf("%i", &escolha);//scanf é digito do usuário, cujo influenciará o valor de uma variavel, neste caso a "escolha"
    //escolha a operação
    //\n pula uma linha na exibição, & indica a mudança no valor da variavel
    printf("Primeiro numero:");
    scanf("%i", &n1);
    
    printf("Segundo numero:");
    scanf("%i", &n2);
    
    //processamento dos calculos
    so = n1 + n2;
    su = n1 - n2;
    mu = n1 * n2;
    di = n1 / n2;
    extrad = n1 % n2;
    
    //saida dos resultados
    switch (escolha){ //switch=seleção ("variavel escolhida")
     case 1://case= caso o valor seja "1" ele roda o printf abaixo
      printf("\n Soma = %i + %i = %i \n", n1, n2, so);//exibição do resultado de soma
      break;//sginifica quebra, caso o valor seja o escolhido, não irá entrar em loop
     case 2:
      printf("\n Subtração = %i - %i = %i \n", n1, n2, su);//exibição do resultado de subtração
      break;
     case 3:
      printf("\n Multiplicação = %i * %i = %i \n", n1, n2, mu);//exibição do resultado de multiplicação
      break;
     case 4:
      printf("\n Divisão = %i / %i = %i,%i/%i\n", n1, n2 ,di, extrad, n2);//exibição do resultado de divisão
      //printf("\n Resto da divisão = %i / %i \n", extrad, n2);//Resto da divisão
      break;
    }
    
    return 0;//final da operação
}







