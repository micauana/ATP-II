/*Milena Cauana - Lista 1 - Exerc�cio 21: Escreva um programa em C que encontre o maior e o menor
elemento em um array de 10 inteiros.*/
#include<stdio.h>

int main ()
{
    int array[10], maior, menor;

    //Coletando os valores
    printf("Forne�a dez valores inteiros: ");

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    //Comparando os valores a definindo o maior e o maior
    maior = array[0];
    menor = array[0];

    for (int a = 1; a < 10; a++)
    {
        if (array[a] > maior)
        {
            maior = array[a];
        }

        if (array[a] < menor)
        {
            menor = array[a];
        }
    }

    printf("\n\n===========\n\n");

    //Imprimindo o maior e o menor
    printf("O maior elemento �: %d\n", maior);
    printf("O menor elemento �: %d\n", menor);

    return 0;
}
