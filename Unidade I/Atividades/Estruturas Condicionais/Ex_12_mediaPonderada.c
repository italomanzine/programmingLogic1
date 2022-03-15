 // FILE: Ex_12_mediaPonderada.c
 // TITLE: Média ponderada em C
 // SUBMITTED BY: Ítalo Manzine
 // FOR COURSE: Linguagem de Programação I - UFSC
 // DUE DATE: March 01, 2021
 //
 // PURPOSE:
 // Esse programa recebe três notas de um estudante, calcula e mostra a média
 // ponderada e dependendo da nota mostra o conceito do aluno em A,B,C,D e E.
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
 // stdlib.h
 // locale.h
 //
 // DATA FILES: none
 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

 int main(){
   float notaTrabalho, notaAvaliacao, notaExame, media;

   setlocale(LC_ALL, "");
   printf("Digite a nota de trabalho do laboratório: ");
   scanf("%f", &notaTrabalho);
   printf("Digite a nota de avaliação semestral: ");
   scanf("%f", &notaAvaliacao);
   printf("Digite a nota de exame final: ");
   scanf("%f", &notaExame);

   media = notaTrabalho*0.2+notaAvaliacao*0.3+notaExame*0.5;

   printf("A média ponderada do aluno é: %f", media);

   if (media<5)
   {
     printf("\nConceito E \n");
   } else if (media<6)
      {
        printf("\nConceito D \n");
      } else if (media<7)
        {
          printf("\nConceito C \n");
        } else if (media<8)
          {
            printf("\nConceito B \n");
          } else if (media<=10)
            {
              printf("\nConceito A \n");
            }

   system("PAUSE");
   return 0;    
 }