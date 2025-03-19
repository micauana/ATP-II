/*Milena Cauana - Lista 1 - Exercício 37: Escreva um programa em C que declare um array de 5 inteiros
e passe esse array para uma funcao que calcule a media dos elementos do array.*/
#include<stdio.h>

float funcao_soma (int *vetor, int tam)
{
    int soma = 0;
    int x;

    for (x = 0; x < tam; x++)
    {
        soma += *(vetor + x);
    }

    return (float) soma / tam;
}

int main ()
{
    int *array;
    int i;

    //Alcoando na memória o array
    array = malloc (sizeof(int) * 5);

    //Coletando os números inteiros

    for (i = 0; i < 5; i++)
    {
        printf("Forneca o %d numero: \n", i + 1);
        scanf("%d", &array[i]);
    }

    //Imprimindo a soma
    printf("Média: %.2f", funcao_soma(array, 5));

    //Liberando a memória
    free(array);


return 0;
}
