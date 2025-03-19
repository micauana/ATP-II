/*Teste da Ordenação por Seleção Recursiva*/
#include<stdio.h>

void OrdenacaoSelecao (int *v, int inicio, int tam) //*v seria o vetor
{
    if (inicio == tam) return;

    int menor = inicio;

    for (int i = inicio + 1; i < tam; i++)
    {
        if (v[i] < v[menor])
        {
            menor = i;
        }
    }

    int aux = v[menor];
    v[menor] = v[inicio];
    v[inicio] = aux;

    OrdenacaoSelecao (v, inicio + 1, tam);


}

int main ()
{
    int vetor[6] = {3, 6, 5, 1, 2, 8};

    //Imprimindo o vetor inicial
    printf("Vetor inicial: \n");

    for (int i = 0; i < 6; i++)
    {
        printf(" %d ", vetor[i]);
    }

    //Implementando a ordenação por seleção
    OrdenacaoSelecao (vetor, 0, 6);

    //Imprimindo para verificar se está correto
    printf("\n\nVetor final: \n");

    for (int i = 0; i < 6; i++)
    {
        printf(" %d ", vetor[i]);
    }

return 0;
}
