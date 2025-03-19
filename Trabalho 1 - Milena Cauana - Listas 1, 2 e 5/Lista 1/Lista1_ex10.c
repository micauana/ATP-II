/*Milena Cauana - Lista 1 - Exercício 10: Escreva um programa em C que preencha um array de 10
inteiros com numeros aleatorios entre 50 e 150. Calcule e imprima a media dos elementos do array.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
   int array[10];
   int i;
   float soma = 0;

   //Declarando srand
   srand(time(NULL));

   //Preenchendo o array
   for (i = 0; i < 10; i++)
   {
       array[i] = 50 + ((float)rand()/ RAND_MAX) * 100;
   }

   //Imprimindo os elementos para conferir
   printf("Os dez numeros aleatorios sao: \n");
   for (i = 0; i < 10; i++)
   {
       printf(" %d ", array[i]);
   }

   printf("\n\n");

   //Calculando a soma dos elementos
   for (i = 0; i < 10; i++)
   {
       soma += array[i];
   }

   //Imprimindo e calculando a média
   printf("A média dos elementos é: \n");

   printf("%.1f\n", soma / 10.0);

return 0;
}
