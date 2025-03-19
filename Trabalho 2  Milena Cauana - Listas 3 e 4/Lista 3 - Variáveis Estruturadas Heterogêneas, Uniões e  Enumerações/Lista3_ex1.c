/*Milena Cauana - Lista 3 - Exerc�cio 1: Declare e inicialize uma estrutura para armazenar as informacoes de um livro
(titulo, autor, ano de publicacaoo) e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

//Criando o tipo Livro que recebe a string com o titulo do livro, a string com o autor e o inteiro com o ano de publica��o do livro
struct Livro
{
    char titulo[100];
    char  autor[100];
    int ano_publicacao;
};

int main ()
{
    //Criando a vari�vel do tipo Livro
    struct Livro informacoes;

    //Arrecadando as informa��es do usu�rio
    printf("Titulo: ");
    fgets(informacoes.titulo, 100, stdin);
    informacoes.titulo[strcspn(informacoes.titulo, "\n")] = '\0'; // Nesse caso, a fun��o 'strcspn retorna o �ndice em que se encontra a string '\n' na string informacoes.titulo
    printf("Autor: ");
    fgets(informacoes.autor, 100, stdin);
    informacoes.autor[strcspn(informacoes.autor, "\n")] = '\0';
    printf("Ano de publicacao: ");
    scanf("%d", &informacoes.ano_publicacao);

    //Imprimindo as informa��es
    printf("\n==========\n\n");
    printf("Titulo: %s\nAutor: %s\nAno de publicacao: %d\n", informacoes.titulo, informacoes.autor, informacoes.ano_publicacao);

return 0;
}
