/*Milena Cauana - Lista 4 - Exercício 6: Escreva um programa em C para buscar e exibir um determinado caractere
em um arquivo de texto.*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    FILE *arquivo;
    char caractere_busca;
    char caractere_lido;
    int existe = 0;


    //Recebendo do usuário o caractere que deve ser econtrado
    printf("Qual caractere deve ser encontrado?");
    scanf("%c", &caractere_busca);

    //Abrindo o arquivo como ler, para procurar o caractere e conferindo se foi aberto
    arquivo = fopen("arquivo.txt", "r");

    if (arquivo == NULL)
    {
        perror("arquivo.txt:");
        printf("Erro ao abrir Arquivo.\n");
        exit(1);
    }

    //Procurando o caractere dentro do arquivo
    while (fscanf(arquivo, "%c", &caractere_lido) != EOF)
    {
        if (caractere_lido == caractere_busca)
        {
            printf("Encontrado o caractere '%c' no arquivo.\n", caractere_lido);
            existe = 1;
            break;
        }
    }

    //Conferindo que não foi encontrado
    if (!existe)
    {
        printf("O caractere '%c' nao foi encontrado no arquivo.\n", caractere_busca);
    }

    //Fechando o arquivo
    fclose(arquivo);

return 0;
}
