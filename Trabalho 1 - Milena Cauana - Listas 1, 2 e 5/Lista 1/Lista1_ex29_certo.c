/*Milena Cauana - Lista 1 - Exercício 29: Escreva um programa em C que use um array de ponteiros para
armazenar e imprimir 5 strings. */
#include<stdio.h>
#include<string.h>

#define TAM 5
#define STRING_MAX 1000

int main ()
{
    char **array;
    char aux[STRING_MAX];
    int i;


    //Alocando espaço para armazenar as 5 strings
    array = malloc(sizeof(char*)*TAM);

    //Coletando as strings
    for (i = 0; i < TAM; i++)
    {
        printf("\nString[%d]: \n", i);
        fgets(aux, 1000, stdin); //iremos primeiro colocar em aux, para só alocarmos e colocarmos na memória, depois, o espaço necessário

        if (aux[strlen(aux) - 1] == '\n') // Como fgets armazena o \n, o substituiremos pelo marcador de fim de string
        {
            aux[strlen(aux) - 1] = '\0';
        }

        array[i] = malloc(sizeof(char)*(strlen(aux) + 1));
        strcpy(array[i], aux);
    }

    printf("\n\n");

    for (i = 0; i < TAM; i++)
    {
        printf("String[%d]: %s\n", i, array[i]);
    }

    // Liberando a memória de cada string
    for (i = 0; i < TAM; i++)
    {
        free(array[i]);
    }

    free(array);

return 0;
}
