/*Milena Cauana - Lista 1 -Exerc�cio 30: Escreva um programa em C que use um array de ponteiros
para armazenar 3 strings, ordene as strings em ordem alfabetica e as imprima.*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define TAM 3

int main ()
{
   char **array;
   char aux[1000];
   char *temp;
   int i, j;

   array = malloc(sizeof (char*) * TAM); //Alocando espa�o para receber tr�s strings

   if (array == 0)
   {
       printf("Erro no armazenamento.");
       return 1;
   }

   //Coletando as strings
   for (i = 0; i < TAM; i++)
   {
       printf("String [%d]: \n", i);
       fgets(aux, 1000, stdin);

       if (aux[strlen(aux) - 1] == '\n')
       {
           aux[strlen(aux) - 1] = '\0'; //Como fgets armazena \n no final, iremos troc�-lo para dar o final da string
       }

       array[i] = malloc(sizeof(char) * (strlen (aux) + 1));
       strcpy (array[i], aux);
   }

   //Definindo maiusculas iguais minusculas para que a ordem alfab�tica saia correta
   for (i = 0; i < TAM; i++)
   {
       for (j =0; array[i][j] != '\0'; j++)
       {
            array [i][j]= tolower (array [i][j]);
       }
   }

   //Ordenando as strings em ordem alfab�tica, para isso, utilizaremos a string auxiliar
   for (i = 0; i < TAM; i++)
   {
       for (j = 0; j < TAM; j++)
       {
           if ((strcmp (array[i], array[j])) < 0)
           {
               temp = array[j];
               array[j] = array[i];
               array[i] = temp;
           }
       }
   }

    //Imprimindo as strings em ordem alfab�tica
    for (i = 0; i < TAM; i++)
    {
        printf("\nString[%d]: %s\n", i, array[i]);
    }

    //Limpando o espa�o
    for (i = 0; i < TAM; i++)
    {
        free(array[i]);
    }

    free(array);


return 0;
}
