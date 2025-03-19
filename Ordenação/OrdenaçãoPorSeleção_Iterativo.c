/*Teste da Ordena��o por Sele��o*/
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

    //Implementando a ordena��o por sele��o
    for (int i = 0; i < 6; i++) //Esse primeiro loop ir� fazer a sele��o do primeiro indice que ser� comparado por vez
    {
        int menor = i;
        for(int j = i + 1; j < 6; j ++) //Esse segundo loop dir� respeito dos elementos que ser�o comparados
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

    //Imprimindo para verificar se est� correto
    printf("\n\nVetor final: \n");

    for (int i = 0; i < 6; i++)
    {
        printf(" %d ", vetor[i]);
    }

return 0;
}
