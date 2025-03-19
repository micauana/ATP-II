/*Milena Cauana - Lista 1 - Exercicio 35: Verificar se um numero digitado eh par ou impar*/
#include<stdio.h>
#include<stdlib.h>

int main (int argc, char **argv)
{
    int par = 1;
    int num;

    if (argc != 2)
    {
        printf("Erro! Forneca um unico numero");
        return 1;
    }

    num = atoi (argv[1]);

    if (num % 2 != 0)
    {
       par = 0;
    }

    if (par)
    {
        printf("\nO numero digitado eh par.\n");
    }
    else
    {
        printf("\nO numero digitado eh impar.\n");
    }


return 0;
}
