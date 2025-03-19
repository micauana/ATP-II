/*Milena Cauana - Lista 5 - Exercicio 14: Implemente uma funcao recursiva para verificar se uma palavra e um
palındromo.*/
#include<stdio.h>
#include<string.h>

int palindromo (char array[], int inicio, int fim)
{
    if (array[inicio] != array[fim])
    {
        return 0;
    }
    else
    {
        if (inicio > fim)
        {
            return 1;
        }
        else
        {
            return palindromo (array, inicio + 1, fim - 1);
        }
    }
}

int main ()
{
    char string[50]; //Não farei uma string muito grande, pois veremos se uma palavra é um palindromo e a maior palavra da lingua portuguesa tem 46 letras
    int tam;

    //Recebendo a palavra
    printf("Palavra: ");
    fgets(string, 50, stdin);

    //Vamos descobrir o tamanho da palavra
    tam = strlen(string) - 2; //Subtraimos 2 pois o fgets armazena o '\0' e '\n'

    //Imprimindo se é ou não um palindromo

    if (palindromo(string, 0, tam))
    {
        printf("\nEh palindromo.\n");
    }
    else
    {
        printf("\nNAO eh palindromo.\n");
    }


return 0;
}
