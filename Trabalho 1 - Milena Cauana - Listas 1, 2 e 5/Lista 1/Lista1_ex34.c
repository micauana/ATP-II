/*Milena Cauana - Lista 1 - Exercício 34: Escreva um programa em C que receba uma string como
argumento na linha de comando e conte o numero de caracteres dessa string.*/
#include<stdio.h>

int main (int argc, char **argv)
{
    int i, j;
    int caractere = 0;

    if (argc != 2) //Como o exercício pede para receber UMA string, só receberemos uma string
    {
        printf("Erro! Forneça somente uma string.\n");
        return -1;
    }

    for (i = 0; argv[1][i] != '\0'; i++) //Já que é somente uma string, olharemos cada elemento da string armazenada em argv[1]
    {
        caractere += 1;
    }

    printf("A string tem %d caracteres.\n", caractere);

return 0;
}
