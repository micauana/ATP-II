/*Milena Cauana - Lista 4 - Exercício 3: Escreva um programa em C para contar o numero de linhas em um arquivo
de texto.*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int qtd_linhas = 0;
    FILE *arquivo;
    char string[100];

    //Abrindo o arquivo para leitura e verificando se foi aberto
    arquivo = fopen("arquivo.txt", "r");

    if (arquivo == NULL)
    {
        perror("arquivo.txt:");
        printf("Arquivo nao aberto.\n");
        exit(1);
    }

    //Contando a quantidade de linhas, para isso utilizaremos fgets que armazena a string até achar uma quebra de linhas
    while (fgets(string, sizeof(string), arquivo) != NULL)
    {
        qtd_linhas ++; //Ou seja, toda vez que ele encontrar um \n ele contará uma linha e parará quando as informações do arquivo tiverem acabado
    }


    //Imprimindo a quantidade para conferir
    printf("Quantidade de linhas: %d\n", qtd_linhas);

    //Fechando o arquivo
    fclose(arquivo);

return 0;
}
