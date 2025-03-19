/*Milena Cauana - Lista 4 - Exercício 2: Escreva um programa em C para ler e exibir o conte ́udo de um arquivo de
texto.*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char c;
    FILE *arquivo;

    //Abrindo o arquivo e conferindo se ele foi aberto (utilizarei o arquivo que foi aberto e escrito no exercício 1)
    arquivo = fopen("arquivo.txt", "r");

    if (arquivo == NULL)
    {
        perror("arquivo.txt:");
        printf("Erro ao abrir arquivo.\n");
        exit(1);
    }

    //Lendo o conteúdo do arquivo de texto
    while ((c = fgetc(arquivo)) != EOF)
    {
        putchar(c);//putchar é uma função que lê e imprime na tela caractere por caractere
    }

return 0;
}
