/*Milena Cauana - Lista 2 - Exercício 3: Escreva um programa em C que verifique se duas matrizes 2x2
sao iguais.*/
#include<stdio.h>

#define SIZE 2


//Função para ler uma matriz de tamanho  definido
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
    int iguais = 1;//Começo assumindo que as matrizes são iguais

    //Os elementos das duas matrizes serão fornecidas pelo usuário, para isso, criei uma função, visto que para as duas matrizes o processo é o mesmo
    printf("Forneca os elementos da primeira matriz: \n");
    definindo_matriz_quadrada(SIZE, matriz1);

    printf("Forneca os elementos da segunda matriz: \n");
    definindo_matriz_quadrada(SIZE, matriz2);

    //Comparando se as duas são iguais
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (matriz1[i][j] != matriz2[i][j]) //Para as matrizes serem iguais o elemento de cada posição tem que ser igual ao elemento da outra matriz na mesma posição
            {
                iguais = 0;
                break;
            }
        }
        if (!iguais)
        {
            break;//Se ele já encontrou que elas não são iguais, ele parará o loop externo também
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
