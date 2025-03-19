/*Milena Cauana - Lista 1 - Exercício 23: Escreva um programa em C que determine se um array de
10 inteiros  ́e simetrico (um palındromo).*/
#include<stdio.h>

int main ()
{
    int array[10], palindromo;

    //Coletando os valores do array
    printf("Forneca dez numeros inteiros: ");

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\n\n=======\n\n");

    //Observando se é um palindromo
    for (int a = 0, b = 9; b >= a; a++, b--)
    {
        if (array[a] != array[b])
        {
            palindromo = 0;
            break;
        }
        else
        {
            palindromo = 1;
        }
    }

    //Imprimindo resultado
    if (palindromo == 0)
    {
        printf("Nao eh um palindromo.\n");
    }
    else
    {
        printf("Eh um palindromo.\n");
    }

return 0;
}
