/*Milena Cauana - Lista 1 - Exercicio 38: Escreva um programa em C que declare um array de 10
inteiros e passe esse array para uma funcao que encontre o maior elemento do array.*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int maior_elemento (int *vetor, int tam)
{
    int i;
    int maior = vetor[0];

    for (i = 1; i < tam; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    return maior;

}

int main ()
{
    int *array;
    int i;

    //Alocando o array
    array = malloc (sizeof(int) * 10);

    if (array == NULL)
    {
        printf("Erro ao armazenar!\n");
        return 1;
    }

    //Os dez números inteiros serão aleatórios entre 0 e 25
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        array[i] = rand() % 26;
    }


    //Imprimindo quais são os dez numeros inteiros
    printf("Os numeros inteiros sao: ");

    for (i = 0; i < 10; i++)
    {
        printf(" %d ", *(array + i));
    }

    //Imprimindo o maior elemento
    printf("\nO maior elemento eh: %d\n", maior_elemento(array, 10));

    //Liberando espaço
    free(array);

return 0;
}
