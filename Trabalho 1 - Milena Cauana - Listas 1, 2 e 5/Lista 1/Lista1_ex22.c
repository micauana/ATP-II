/*Milena Cauana - Lista 1 - Exercício 22:Escreva um programa em C que conte o numero de elementos
pares e  ́ımpares em um array de 20 inteiros.*/
#include<stdio.h>

int main ()
{
    int array[20], par = 0, impar = 0;

    //Coletando os numeros do array
    printf("Forneça vinte numeros inteiros: ");

    for(int i = 0; i < 20; i++)
    {
        scanf("%d", &array[i]);
    }

    //Definindo quantos são pares e quantos são ímpares
    for (int a = 0; a < 20; a++)
    {
        if (array[a] % 2 == 0)
        {
            par += 1;
        }
        else
        {
            impar += 1;
        }
    }

    printf("\n\n========\n\n");

    //Imprimindo a quantidade de pares e a quantidade de ímpares
    printf("Quantidade de números impares: %d\n", impar);
    printf("Quantidade de numeros pares: %d\n", par);

return 0;
}
