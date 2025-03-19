/*Milena Cauana - Lista 4 - Exerc�cio 1: Escreva um programa em C para criar um arquivo de texto e escrever uma
mensagem nele.*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    FILE *arquivo;
    char mensagem[] = "Oi, tudo bem?";

    //Abrindo o arquivo
    arquivo = fopen("arquivo.txt", "w");//o 'w' ir� criar um novo arquivo ou sobescrever caso exista

    //Ap�s abrir um arquivo, devemos sempre verificar se ele foi aberto
    if (arquivo == NULL)
    {
        perror("arquivo.txt:");
        printf("Erro na abertura!\n");
        exit(1);
    }

    //Inserindo a mensagem no arquivo, utilizaremos a vari�vel 'retorno' para verificar se foi colocado
    int retorno = fprintf(arquivo, "%s", mensagem);


    if(retorno < 0)
    {
        printf("Erro na Gravacao\n");
        fclose(arquivo);
        exit(1);
    }


    //Fechando o arquivo
    fclose(arquivo);

return 0;
}
