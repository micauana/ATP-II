/*Milena Cauana - Lista 2 - Exerc�cio 49: Escreva um programa em C que calcule a transposta de uma
matriz 3x4*/
#include<stdio.h>

#define TRES 3
#define QUATRO 4

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
    int matriz[TRES][QUATRO];
    int matriz_transposta[QUATRO][TRES];

    //A matriz 3x2 ser� definida pelo usu�rio
    printf("Forne�a os elementos da matriz que sera transposta: ");

    definindo_matriz(TRES, QUATRO, matriz);

    //Transpondo a matriz
    for (i = 0; i < QUATRO; i++)
    {
        for (j = 0; j < TRES; j++)
        {
            matriz_transposta[i][j] = matriz[j][i];
        }
    }

    //Imprimindo a matriz transposta
    printf("Matriz transposta: \n");

    for (i = 0; i < QUATRO; i++)
    {
        for (j = 0; j < TRES; j++)
        {
            printf(" %d ", matriz_transposta[i][j]);
        }
        printf("\n");
    }


    return 0;
}
