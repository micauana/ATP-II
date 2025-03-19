/*Milena Cauana - Lista 4 - Exercício 5: Escreva um programa em C para concatenar dois arquivos de texto em um
terceiro arquivo.*/
#include<stdio.h>
#include<stdlib.h>

void PassagemArqPraArq (FILE *arq1, FILE *arq2)
{
    char c;

    while(fscanf(arq1, "%c", &c) != EOF)
    {
        fprintf(arq2, "%c", c);
    }
}

int main ()
{
    FILE *arquivo1, *arquivo2, *arquivo3;
    char c;

    //Abrindo os arquivos, os dois primeiros serão para ler e o terceiro para escrever
    arquivo1 = fopen("arquivo.txt", "r");

    if (arquivo1 == NULL)
    {
        perror("arquivo.txt:");
        printf("Erro ao abrir Arquivo 1.\n");
        exit(1);
    }

    arquivo2 = fopen("arquivo2.txt", "r");

    if (arquivo2 == NULL)
    {
        perror("arquivo2.txt:");
        printf("Erro ao abrir Arquivo 2.\n");
        fclose(arquivo1);
        exit(1);
    }

    arquivo3 = fopen("arquivo3.txt", "w");

    if (arquivo3 == NULL)
    {
        perror("arquivo3.txt:");
        printf("Erro ao abrir Arquivo 3.\n");
        fclose(arquivo1);
        fclose(arquivo2);
        exit(1);
    }

    //Concatenando os dois arquivos no terceiro, para isso, chamarei a função para cada caso
    PassagemArqPraArq (arquivo1, arquivo3);
    PassagemArqPraArq (arquivo2, arquivo3);

    //Fechando os arquivos
    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);


return 0;
}
