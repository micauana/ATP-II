/*Milena Cauana - Lista 1 - Exerc�cio 34: Escreva um programa em C que receba uma string como
argumento na linha de comando e conte o numero de caracteres dessa string.*/
#include<stdio.h>

int main (int argc, char **argv)
{
    int i, j;
    int caractere = 0;

    if (argc != 2) //Como o exerc�cio pede para receber UMA string, s� receberemos uma string
    {
        printf("Erro! Forne�a somente uma string.\n");
        return -1;
    }

    for (i = 0; argv[1][i] != '\0'; i++) //J� que � somente uma string, olharemos cada elemento da string armazenada em argv[1]
    {
        caractere += 1;
    }

    printf("A string tem %d caracteres.\n", caractere);

return 0;
}
