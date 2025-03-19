/*Milena Cauana - Lista 2 - Exercício 5: Escreva um programa em C que transponha uma matriz 3x2 para
uma matriz 2x3.*/
#include<stdio.h>

#define TRES 3
#define DOIS 2

//Função para ler uma matriz de tamanho  definido
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
    int matriz[TRES][DOIS];
    int matriz_transposta[DOIS][TRES];

    //A matriz 3x2 será definida pelo usuário
    printf("Forneça os elementos da matriz que sera transposta: ");

    definindo_matriz(TRES, DOIS, matriz);

    //Transponto a matriz
    for (i = 0; i < DOIS; i++)
    {
        for (j = 0; j < TRES; j++)
        {
            matriz_transposta[i][j] = matriz[j][i];
        }
    }

    //Imprimindo a matriz transposta
    printf("Matriz transposta: \n");

    for (i = 0; i < DOIS; i++)
    {
        for (j = 0; j < TRES; j++)
        {
            printf(" %d ", matriz_transposta[i][j]);
        }
        printf("\n");
    }


    return 0;
}
