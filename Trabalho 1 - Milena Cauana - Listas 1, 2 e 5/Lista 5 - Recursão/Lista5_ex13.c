/*Milena Cauana - Lista 5 - Exercicio 13: Escreva uma funcao recursiva para encontrar o numero de ocorrencias de
um elemento em um array.*/
#include<stdio.h>

int qtd_elemento(int vetor[], int y, int x)
{
    if (x < 0)
    {
        return 0;
    }
    else
    {
        if (vetor[x] == y)
        {
            return 1 + qtd_elemento(vetor, y, x - 1);
        }
        else
        {
            return qtd_elemento(vetor, y, x - 1);
        }
    }
}


int main ()
{
    int n;
    int i;

    //Descobrindo a quantidade de elementos que o array terá
    printf("Quantidade de elementos que sera fornecida: \n");
    scanf("%d", &n);

    int array[n];
    int elemento;

    //COletando os elementos
    for (i = 0; i < n; i++)
    {
        printf("Forneca o elemento %d\n", i + 1);
        scanf("%d", &array[i]);
    }

    //Coletando o elemento que será procurando no array
    printf("Elemento que sera contado: \n");
    scanf("%d", &elemento);

    //Imprimindo a quantidade do elemento
    printf("\n\nO elemento %d aparece %d vezes no array.\n", elemento, qtd_elemento(array, elemento, n - 1));


return 0;
}
