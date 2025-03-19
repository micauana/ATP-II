/*Milena Cauana - Lista 5 - Exercício 3: Crie uma funcao recursiva para encontrar o maximo elemento em um array.*/
#include<stdio.h>

int maior_elemento(int array[], int tam, int indice)
{
    if (tam == 0)
    {
        return array[indice];
    }
    else
    {
        if (array[tam - 1] > array[indice])
        {
            return maior_elemento(array, tam - 1, tam - 1);
        }
        else
        {
            return maior_elemento(array, tam - 1, indice);
        }

    }
}

int main ()
{
    int vetor[8]= {1, 2, 5, 8, 3, 6, 7, 4};


    //Imprimindo o vetor para conferir
    printf("o Vetor eh: ");

    for (int i = 0; i < 8; i++)
    {
        printf(" %d ", vetor[i]);
    }

    //Imprimindo o maior
    printf("\n\nMaior: %d\n", maior_elemento(vetor, 8, 0)); //inicio passando para a função o que esta armazenado no indice zero como o maior, para depois poder comparar

return 0;
}
