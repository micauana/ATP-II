/*Milena Cauana - Lista 1 - Exerc�cio 25: Escreva um programa em C que leia uma string e conte o numero
de caracteres, palavras e linhas na string.*/
#include<stdio.h>
#include<string.h>

int main ()
{
    char string[1000];
    int caracter = 0, palavra = 0, linha = 0;
    int i;

    //Recebendo os valores da string
    printf("Escreva uma palavra, frase ou texto: \n");

    fgets(string, 1000, stdin);

    //Definindo o numero de caracteres, utilizando strlen

    caracter = strlen(string) - 1;//subtraimos 1 pois estamos tirando o '\n' do final

    //Contando o n�mero de linhas
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '\n')
        {
            linha ++;
        }
    }

    //Definindo a quantidade de palavras
    for (i = 0; string[i] != '\0'; i++)
    {
        //De modo geral, as palavras v�m depois de um espa�o ' ', exceto a primeiro do texto ou do par�grafo

        if (i == 0 || string[i - 1] == ' ' || string[i - 1] == '\n')
        {
            palavra += 1;
        }

    }

    //Imprimindo os resultados
    printf("\n\n==================\n\n");
    printf("Numero de caracteres: %d\n", caracter);
    printf("Numero de palavras: %d\n", palavra);
    printf("Numero de linhas: %d\n", linha);

return 0;
}
