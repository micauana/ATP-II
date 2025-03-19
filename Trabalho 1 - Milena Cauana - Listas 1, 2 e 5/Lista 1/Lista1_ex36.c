/*Milena Cauana - Lista 1 - Exercício 36: Escreva um programa em C que receba 5 numeros inteiros
como argumentos na linha de comando e imprima o maior deles.*/
#include<stdio.h>
#include<stdlib.h>

int main (int argc, char **argv)
{
    int numero[5];
    int i;

    //Conferindo se realmente foram passados somente 5 numeros
    if (argc != 6)
    {
        printf("Erro! Forneca somente 5 numeros\n");
        return 1;
    }

    //Transformando cada string argv em inteiros
    for (i = 1; i < 6; i++)
    {
        numero[i - 1] = atoi(argv[i]);
    }

    //Coletando o maior inteiro
    int maior = numero[0];

    for (i = 1; i < 5; i++)
    {
        if (numero[i] > maior)
        {
            maior = numero[i];
        }
    }

    //Imprimindo o maior
    printf("Maior numero: %d\n", maior);

return 0;
}
