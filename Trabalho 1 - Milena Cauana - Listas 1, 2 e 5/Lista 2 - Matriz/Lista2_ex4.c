/*Milena Cauana - Lista 2 - Exerc�cio 4: Escreva um programa em C que multiplique duas matrizes 3x3.*/
#include<stdio.h>

#define SIZE 3


//Fun��o para definir uma matriz quadrada de tamanho definido
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
    int a;
    int matriz1 [SIZE][SIZE];
    int matriz2 [SIZE][SIZE];
    int matriz_resultante [SIZE][SIZE];


    //Utilizando a fun��o para definir as matrizes que ser�o multiplicadas
    printf("Forneca os elementos da primeira matriz: \n");
    definindo_matriz_quadrada(SIZE, matriz1);

    printf("Forneca os elementos da segunda matriz: \n");
    definindo_matriz_quadrada(SIZE, matriz2);

    //Efetuando a multiplica��o e armazenando na matriz resultante
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            matriz_resultante[i][j] = 0; //Inicializando com todos os elementos zero para conseguir adicionar os n�meros que ser�o m�ltiplicados
            for (a = 0; a < SIZE; a++)
            {
                matriz_resultante[i][j] += matriz1[i][a] * matriz2[a][j];
            }
        }
    }


    //Imprimindo elementos espec�ficos para entender o que est� acontecendo
    printf("Elemento a12: %d\n", matriz_resultante[0][1]);
    printf("Elemento a22: %d\n", matriz_resultante[1][1]);
    printf("Elemento a32: %d\n", matriz_resultante[2][1]);


    //Imprimindo a matriz resultante
    printf("Matriz resultante: \n");

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf(" %d", matriz_resultante[i][j]);
        }
        printf("\n");
    }

return 0;
}
