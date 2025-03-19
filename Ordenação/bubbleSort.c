/*Teste Bubble Sort*/
#include<stdio.h>

int main ()
{

    int vetor[5] = {5, 4, 3, 2, 1};

    //Imprimindo o vetor original para conferir
    printf("Vetor original:\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", vetor[i]);
    }


    //Fazendo o algoritmos bubble sort
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (vetor [j] > vetor[j + 1])
            {
                int aux = vetor [j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    //Imprimindo o resultado
    printf("\nVetor final:\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", vetor[i]);
    }

return 0;
}
