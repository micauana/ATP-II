/*Milena Cauana - Lista 4 - Exercício 8: Escreva um programa em C para ler e exibir o conte ́udo de um arquivo
binario.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Para ler e exibir um arquivo binário, temos que ter um, por isso, o criei anteriormente, veja:

    int ra = 12345, telefone = 12345678;
    char  nome[] = "Milena Cauana";
    FILE *arquivoBinario;

    //Abrindo o arquivo
    arquivoBinario = fopen("arquivo_binario.bin", "wb");
    if(arquivoBinario == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    fwrite(&ra, sizeof(int), 1, arquivoBinario);
    fwrite(&telefone, sizeof(int), 1, arquivoBinario);
    fwrite(&nome, sizeof(char), strlen(nome) + 1, arquivoBinario);

    //Fechando o arquivo para começa de fato o exercício
    fclose(arquivoBinario);
    */

int main ()
{
    int ra, telefone;
    char nome[100];
    FILE *arquivoBinario;

    //Primeiro iremos abrir o arquivo para ler
    arquivoBinario = fopen("arquivo_binario.bin", "rb");
    if(arquivoBinario == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    //Agora, ireir ler o arquivo
    fread(&ra, sizeof(int), 1, arquivoBinario);
    fread(&telefone, sizeof(int), 1, arquivoBinario);
    fread(nome, sizeof(char), 100, arquivoBinario);

    //Imprimindo os valores
    printf("--Informacoes--\n");
    printf("RA: %d\nTelefone: %d\nNome: %s\n", ra, telefone, nome);

    //Fechando o arquivo
    fclose(arquivoBinario);

return 0;
}
