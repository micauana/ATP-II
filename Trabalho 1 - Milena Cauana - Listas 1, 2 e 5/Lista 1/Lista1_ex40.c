/*Milena Cauana - Lista 1 - Exercício 40: Escreva um programa em C que declare um array de 8
inteiros e passe esse array para uma funcao que inverta a ordem dos elementos do array.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void elementos_invertidos(int *vetor, int tam)
{
    int i, x;

    for (i = 0, x = tam - 1; i < x; i++, x--)
    {
        int aux = vetor[i];
        vetor[i] = vetor[x];
        vetor[x] = aux;
    }
}

int main ()
{
    int *array;
    int i;

    //Alocando memoria para o array
    array = malloc (sizeof(int) * 8);

    if (array == NULL)
    {
        printf("Erro ano armazenar!\n");
        return 1;
    }

    //Os 8 números inteiros serão alocados de forma aleatória entre númeors de 0 a 30
    srand(time(NULL));

    for (i = 0; i < 8; i++)
    {
        array[i] = rand() % 31;
    }

    //Imprimindo o array para conferencia
    printf("Os oito numeros inteiros sao: ");
    for (i = 0; i < 8; i++)
    {
        printf(" %d ", array[i]);
    }

    //Invertendo os elementos
    elementos_invertidos(array, 8);

    //Imprimindo o array intertido
    printf("\n\nArray invertido: ");

    for (i = 0; i < 8; i++)
    {
        printf(" %d ", array[i]);
    }

    printf("\n\n");

    //Liberando espaço
    free(array);

return 0;
}
