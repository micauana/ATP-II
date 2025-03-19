/*Milena Cauana - Lista 2 - Exerc�cio 45: Escreva um programa em C que multip�lique uma matriz 3x3 por sua transposta*/
#include<stdio.h>

#define TAM 3

//Fun��o para ler uma matriz de tamanho  definido
void definindo_matriz(int a, int b, int matriz[a][b])
{
    int i, j;

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
}

int main ()
{
    int i, j;
    int matriz[TAM][TAM];
    int matriz_transposta[TAM][TAM];
    int matriz_mult[TAM][TAM];
    int a;

    //A matriz 3x2 ser� definida pelo usu�rio
    printf("Forne�a os elementos da matriz que sera transposta: ");

    definindo_matriz(TAM, TAM, matriz);

    //Transponto a matriz
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz_transposta[i][j] = matriz[j][i];
        }
    }

    //Imprimindo a matriz transposta para verificar
    printf("Matriz transposta: \n");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf(" %d ", matriz_transposta[i][j]);
        }
        printf("\n");
    }

    //Multiplicando as matrizes
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz_mult[i][j] = 0; //Inicializando com todos os elementos zero para conseguir adicionar os n�meros que ser�o m�ltiplicados
            for (a = 0; a < TAM; a++)
            {
                matriz_mult[i][j] += matriz[i][a] * matriz_transposta[a][j];
            }
        }
    }

    //Imprimindo matriz resultante
    printf("\nMatriz resultante:\n");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf(" %d ", matriz_mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
