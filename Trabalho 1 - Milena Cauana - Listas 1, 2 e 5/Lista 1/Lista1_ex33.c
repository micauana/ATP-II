/*Milena Cauana - Lista 1 - Exercício 33: Escreva um programa em C que receba 3 numeros inteiros como
argumentos na linha de comando e imprima a soma deles.*/
#include<stdio.h>

int main (int argc, char **argv)
{
    int a, b, c;

    if (argc != 4)
    {
        printf("Erro! Forneca tres numeros.");
        return -1;
    }

    //Transformando as strings em numeros inteiros
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);

    //Imprimindo a soma deles
    printf("\nSoma: %d\n", a + b + c);

return 0;
}
