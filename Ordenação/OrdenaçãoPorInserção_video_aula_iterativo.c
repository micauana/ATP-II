/*Ordenacção por Inserção (da video-aula)*/
#include<stdio.h>

int main ()
{
    int vetor[5] = {7, 3, 5, 8, 2};

    //Imprimindo o vetor original para conferir
    printf("Vetor original:\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", vetor[i]);
    }

    for (int i = 1; i < 5; i++)
    {
        int aux, j = i;

        aux = vetor[j];

        while (j > 0 &&  aux < vetor[j-1])
        {
            vetor[j] = vetor[j-1];
            j--;
        }

        vetor[j] = aux;
    }

    //Imprimindo o resultado
    printf("\nVetor final:\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", vetor[i]);
    }


return;
}
