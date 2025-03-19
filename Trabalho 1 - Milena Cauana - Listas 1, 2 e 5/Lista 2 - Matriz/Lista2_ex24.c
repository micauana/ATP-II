/*Milena Cauana - Lista 2 - Exercicio 24: Escreva um programa em C que verifique se duas matrizes 3x3
sao ortogonais.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 3

void transpondo_matriz(int tam, int matriz_origem[tam][tam],int matriz_transposta[tam][tam])
{
    int i,j;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            matriz_transposta[i][j] = matriz_origem[j][i];
        }
    }
}

void multiplicacao_matriz_A_At(int tam, int matriz_origem[tam][tam],int matriz_transposta[tam][tam], int matriz_mult[tam][tam])
{
    int i, j, a;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            matriz_mult[i][j] = 0; //Inicializando com todos os elementos zero para conseguir adicionar os números que serão múltiplicados
            for (a = 0; a < tam; a++)
            {
                matriz_mult[i][j] += matriz_origem[i][a] * matriz_transposta[a][j];
            }
        }
    }
}

void definindo_matriz(int a, int matriz[a][a])
{
    int i, j;

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            matriz[i][j] = rand() % 11;
        }
    }
}

void imprimindo_matriz(int a, int matriz[a][a])
{
    int i, j;

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int identidade(int tam, int matriz[tam][tam])
{
    int i, j;
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if (i == j && matriz[i][j] != 1)
            {
                return 0; // Não é uma matriz identidade
            }
            else if (i != j && matriz[i][j] != 0)
            {
                return 0; // Não é uma matriz identidade
            }
        }
    }
    return 1; // É uma matriz identidade
}

int main ()
{
    int z;

    srand(time(NULL));

    for (z = 1; z < 3; z++)
    {
        int i, j, a;
        int matriz1[TAM][TAM];
        int matriz1_transposta[TAM][TAM];
        int matriz1_mult_At_A[TAM][TAM];
        int matriz1_mult_A_At[TAM][TAM];

        //Definindo as duas matrizes com elementos entre 0 e 10
        definindo_matriz(TAM, matriz1);

        //Imprimindo a matriz para conferir
        printf("Matriz %d: \n", z);
        imprimindo_matriz(TAM, matriz1);

        //Transpondo as matrizes
        transpondo_matriz(TAM, matriz1, matriz1_transposta);

        //Multiplicação de cada uma por sua transposta
        multiplicacao_matriz_A_At(TAM, matriz1, matriz1_transposta, matriz1_mult_A_At);
        multiplicacao_matriz_A_At(TAM, matriz1_transposta, matriz1, matriz1_mult_At_A);

        //Verificando se elas são ortogonais
        //Para uma matriz ser ortogonal, temos que At*A = A*At = I
        int identidade_A_At = identidade(TAM, matriz1_mult_A_At);
        int identidade_At_A = identidade(TAM, matriz1_mult_At_A);

        //Imprimindo resultado
        if (identidade_A_At && identidade_At_A)
        {
            printf("Matriz %d Ortogonal.\n\n", z);
        }
        else
        {
            printf("Matriz %d NAO ortogonal.\n\n", z);
        }


    }
 return 0;
}

