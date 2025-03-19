/*Milena Cauana - Lista 1 - Exercício 32: Escreva um programa em C que use um array de ponteiros
para armazenar 4 strings e encontre a string de maior comprimento.*/
#include<stdio.h>
#include<string.h>

#define TAM 4

int main ()
{
    char **array;
    char aux[1000];
    char *maior_string = NULL;
    int i;
    int maior;

    //Alocando o array
    array = malloc (sizeof(char*) * TAM);

    if (array == NULL)
    {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    //Definindo as strings
    for (i = 0; i < TAM; i++)
    {
        printf("String[%d]: \n", i+1);
        fgets(aux, 1000, stdin);

        if (aux[strlen (aux) - 1] == '\n')
        {
           aux[strlen (aux) - 1] = '\0';
        }

        //Alocando espaço para cada ponteiro dentro do ponteiro
        array[i] = malloc (sizeof(char) * (strlen(aux) + 1));

        if (array [i] == NULL)
        {
            printf("Erro ao alocar memória para string!\n");
            return 1;
        }

        strcpy(array[i], aux);
    }

    //Encontrando a string de maior comprimento
    //Primeiro iremos armazenar o comprimento da primeiro string, para então, comparar os outros comprimentos com ela.
    maior = strlen (array[0]);

    for (i = 1; i < TAM; i++)
    {
        if ((strlen(array[i])) > maior)
        {
            maior = strlen (array[i]);
            maior_string = array[i];
        }
    }

    //Imprimindo o resultado
    printf("A string de maior comprimento: %s", maior_string);


    //Liberando os alocados
    for (i = 0; i < TAM; i++)
    {
        free(array[i]);
    }

    free(array);


return 0;
}
