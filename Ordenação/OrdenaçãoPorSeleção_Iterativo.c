/*Teste da Ordenação por Seleção*/
#include<stdio.h>

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
    for (int i = 0; i < 6; i++) //Esse primeiro loop irá fazer a seleção do primeiro indice que será comparado por vez
    {
        int menor = i;
        for(int j = i + 1; j < 6; j ++) //Esse segundo loop dirá respeito dos elementos que serão comparados
        {
            if (vetor[j] < vetor[menor])
                {
                    menor = j;
                }
        }

        //Agora que temos o indice do menor elemento, iremos fazer a troca
        int aux = vetor[menor];
        vetor[menor] = vetor[i];
        vetor[i] = aux;
    }

    //Imprimindo para verificar se está correto
    printf("\n\nVetor final: \n");

    for (int i = 0; i < 6; i++)
    {
        printf(" %d ", vetor[i]);
    }

return 0;
}
