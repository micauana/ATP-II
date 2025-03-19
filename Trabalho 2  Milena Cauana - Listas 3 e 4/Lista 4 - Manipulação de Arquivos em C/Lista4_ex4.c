/*Milena Cauana - Lista 4 - Exercício 4: Escreva um programa em C para copiar o contéudo de um arquivo de texto
para outro arquivo.*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    FILE *arquivo1;
    FILE *arquivo2;
    char c;

    //Abrindo dois arquivos, um para ler as informações e outro para escrever as informações
    arquivo1 = fopen("arquivo.txt", "r");

    if (arquivo1 == NULL)
    {
        perror("arquivo.txt:");
        printf("Erro ao abrir Arquivo 1.\n");
        exit(1);
    }

    arquivo2 = fopen("arquivo2.txt", "w");

    if (arquivo2 == NULL)
    {
        perror("arquivo.txt:");
        printf("Erro ao abrir Arquivo 2.\n");
        fclose(arquivo1);
        exit(1);
    }

    //Copiando as informações de um para outro, caractere por caractere
    while(fscanf(arquivo1, "%c", &c) != EOF)
    {
        fprintf(arquivo2, "%c", c);
    }

    //Fechando os arquivos
    fclose(arquivo1);
    fclose(arquivo2);

return 0;
}
