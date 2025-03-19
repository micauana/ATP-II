/*Milena Cauana - Lista 1 - Exerc�cio 37: Escreva um programa em C que declare um array de 5 inteiros
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

    //Alcoando na mem�ria o array
    array = malloc (sizeof(int) * 5);

    //Coletando os n�meros inteiros

    for (i = 0; i < 5; i++)
    {
        printf("Forneca o %d numero: \n", i + 1);
        scanf("%d", &array[i]);
    }

    //Imprimindo a soma
    printf("M�dia: %.2f", funcao_soma(array, 5));

    //Liberando a mem�ria
    free(array);


return 0;
}
