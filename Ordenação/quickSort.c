/*Teste Quick Sort*/
#include<stdio.h>
#include<stdlib.h>

int particiona (int *v, int inicio, int fim)
{
    //Escolher o pivo
    int pivo = ((v[inicio] + v[fim] + v[(inicio + fim)/2])/3);

    //Percorrer o vetor da esquerda para a direita até encontrar um elemento maior que o pivo
    //E percorrer da direita p esrquerda achando menor

    while (inicio < fim)
    {
        while (inicio < fim && v[inicio] <= pivo)
        {
            inicio++;
        }

        while(inicio < fim && v[fim] > pivo)
        {
            fim --;
        }

        int aux = v[inicio];
        v[inicio] = v[fim];
        v[fim] = aux;
    }
    return inicio;
}

void quickSort(int *v, int inicio, int fim)
{
    if(inicio < fim)
    {
        int posicao = particiona(v, inicio, fim);
        quickSort(v, posicao, fim);
        quickSort (v, inicio, posicao - 1);
    }
}

int main ()
{
    int vetor[15] = {47, 35, 12, 49, 56, 25, 71, 83, 5, 3, 1, 70, 99, 10, 61};

    quickSort(vetor, 0, 14);

    //Imprimindo o resultado
    printf("\nVetor final:\n");
    for (int i = 0; i < 15; i++)
    {
        printf(" %d ", vetor[i]);
    }

return 0;
}
