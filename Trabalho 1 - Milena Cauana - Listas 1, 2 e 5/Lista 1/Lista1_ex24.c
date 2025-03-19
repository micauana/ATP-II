/*Milena Cauana - Lista 1 - Exercício 24: Escreva um programa em C que verifique se todos os ele-
mentos de um array de 5 inteiros sao positivos*/
#include<stdio.h>

int main ()
{
    int array[5], positivo = 1;

    //Coletando os valores do array
    printf("Forneça cinco valores: ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    //Verificando se tem algum inteiro nao positivo
    for(int i = 0; i < 5; i++)
    {
        if (array[i] < 0)
        {
            positivo = 0;//Se ele encontrar algum número não positivo ele irá definir a variável 'positivo' como zero e quebrar o looping
            break;
        }
    }

    printf("\n\n=======\n\n");

    //Imprimindo o resultado
    if (positivo == 0)
    {
        printf("Nem todos os elementos do array sao positivos.\n");
    }
    else
    {
        printf("Todos os elementos do array sao positivos.\n");
    }

return 0;
}
