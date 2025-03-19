/*Milena Cauana - Lista 1 - Exercício 39: Escreva um programa em C que declare um array de 6
inteiros e passe esse array para uma funcao que conte quantos elementos sao positivos.*/
#include<stdio.h>
#include<stdlib.h>

int qtd_positivos (int *vetor, int tam)
{
    int positivo = 0;
    int x;

    for (x = 0; x < tam; x++)
    {
        if (vetor[x] > 0) //Não estamos contando o zero como número positivo
        {
            positivo += 1;
        }
    }

    return positivo;
}

int main ()
{
    int *array;
    int i;

    //Alocando memória para o array
    array = malloc (sizeof(int) * 6);

    //Coletando os inteiros
    for (i = 0; i < 6; i++)
    {
        printf("Numero %d: \n", i + 1);
        scanf("%d", &array[i]);
    }

    //Imprimindo resultado
    printf("\nTem %d numeros positivos.\n", qtd_positivos(array, 6));

    //Liberando a memória
    free(array);

return 0;
}
