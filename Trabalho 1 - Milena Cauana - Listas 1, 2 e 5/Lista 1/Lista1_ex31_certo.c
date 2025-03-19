/*Milena Cauana - Lista 1 - Exerc�cio 31: Escreva um programa em C que use um array de ponteiros
para armazenar 5 numeros inteiros e encontre o maior valor entre eles.*/
#include<stdio.h>
#include<string.h>

#define TAM 5

int main ()
{
    int *array;
    int i;
    int *maior;


    //Alocando para o array cinco espa�os para um inteiro
    array = (int *)malloc (sizeof(int)* TAM);

    if (array == NULL)
    {
        printf("Erro ao armazenar!");
        return 1;
    }

    //Recebendo os cinco n�meros inteiros
    for (i = 0; i < TAM; i++)
    {
        printf("Inteiro[%d]: \n", i+1);
        scanf("%d", &array[i]);
    }

    //Definindo o maior entre eles.
    //Para isso, iremos atribuir o primeiro ao ponteiro maior e, ent�o, compar�-lo aos demais
    maior = &array[0];

    for (i = 1; i < TAM; i++)
    {
        if (array[i] > *maior)
        {
            maior = &array[i];
        }
    }

    //Imprimindo o resultado
    printf("O maior numero inteiro eh: %d", *maior);

    //Liberando espa�o
    free(array);


return 0;
}
