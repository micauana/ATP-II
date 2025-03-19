/*Milena Cauana - Lista 1 - Exercício 15: Escreva um programa em C que declare um array de 7
inteiros e use um ponteiro para calcular a soma dos elementos do array.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int array[7];
    int i;
    int *ptr;
    int soma = 0;

    //Serão declarados 7 números aleatórios entre 0 e 20 para o array
    srand(time(NULL));

    for (i = 0; i < 7; i++)
    {
        array[i] = rand() % 21;
    }

    printf("Os sete numeros do array sao:");
    for (i = 0; i < 7; i++)
    {
        printf(" %d ", array[i]);
    }

    printf("\n\n");

    //Definindo o ponteiro
    ptr = array;

    //Calculando a soma do array através do ponteiro
    for (i = 0; i < 7; i++)
    {
        soma += *(ptr + i);
    }

    //Imprimindo o valor da soma
    printf("Soma dos elementos do array: %d\n\n", soma);

return 0;
}
