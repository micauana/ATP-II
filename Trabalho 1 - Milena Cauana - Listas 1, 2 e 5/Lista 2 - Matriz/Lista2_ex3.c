/*Milena Cauana - Lista 2 - Exerc�cio 3: Escreva um programa em C que verifique se duas matrizes 2x2
sao iguais.*/
#include<stdio.h>

#define SIZE 2


//Fun��o para ler uma matriz de tamanho  definido
void definindo_matriz_quadrada(int tamanho, int matriz[tamanho][tamanho])
{
    int i, j;

    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j < tamanho; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
}

int main ()
{
    int i, j;
    int matriz1[SIZE][SIZE];
    int matriz2[SIZE][SIZE];
    int iguais = 1;//Come�o assumindo que as matrizes s�o iguais

    //Os elementos das duas matrizes ser�o fornecidas pelo usu�rio, para isso, criei uma fun��o, visto que para as duas matrizes o processo � o mesmo
    printf("Forneca os elementos da primeira matriz: \n");
    definindo_matriz_quadrada(SIZE, matriz1);

    printf("Forneca os elementos da segunda matriz: \n");
    definindo_matriz_quadrada(SIZE, matriz2);

    //Comparando se as duas s�o iguais
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (matriz1[i][j] != matriz2[i][j]) //Para as matrizes serem iguais o elemento de cada posi��o tem que ser igual ao elemento da outra matriz na mesma posi��o
            {
                iguais = 0;
                break;
            }
        }
        if (!iguais)
        {
            break;//Se ele j� encontrou que elas n�o s�o iguais, ele parar� o loop externo tamb�m
        }
    }

    //Imprimindo resultado
    if (iguais)
    {
        printf("Iguais.\n");
    }
    else
    {
        printf("Diferentes.\n");
    }


return 0;
}
