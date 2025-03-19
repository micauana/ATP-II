/*Milena Cauana - Lista 3 - Exercício 16: Acesse os componentes de uma estrutura de filme (tıtulo, diretor, ano de lancamento)
utilizando o operador ponto ‘.’ e imprima seus valores..*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    int dia;
    int mes;
    int ano;

}DataLancamento;

typedef struct
{
    char titulo[60];
    char diretor[60];
    DataLancamento data_lancamento;

}Filme;

int main ()
{
    Filme filme;


    //Adicionando as informações do filme
    strcpy(filme.titulo, "Titulo do Filme");
    strcpy(filme.diretor, "Nome do Diretor");
    filme.data_lancamento.dia = 10;
    filme.data_lancamento.mes = 10;
    filme.data_lancamento.ano = 2010;

    //Imprimindo os valores utilizando . para acessar os componentes da estrutura
    printf("-- Informacoes do Filme --\n");
    printf("Titulo: %s\nDiretor: %s\nAno de Lancamento: %d/%d/%d\n", filme.titulo, filme.diretor, filme.data_lancamento.dia, filme.data_lancamento.mes, filme.data_lancamento.ano);



return 0;
}
