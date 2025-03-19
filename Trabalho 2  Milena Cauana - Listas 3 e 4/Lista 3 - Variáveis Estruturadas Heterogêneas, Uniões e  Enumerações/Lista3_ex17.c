/*Milena Cauana - Lista 3 - Exercício 17: Acesse os componentes de uma estrutura de filme (t ́ıtulo, diretor, ano de lan ̧camento)
utilizando o operador “->” e imprima seus valores.*/
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
    Filme *ptr;

    //Armazenando no ponteiro o endereco da variável filme
    ptr = &filme;

    //Armazenando as informações
    strcpy(ptr->titulo, "Titulo do Filme");
    strcpy(ptr->diretor, "Nome do Diretor");
    ptr->data_lancamento.dia = 10;
    ptr->data_lancamento.mes = 10;
    ptr->data_lancamento.ano = 2010;

    //Imprimindo as informações
    //Imprimindo os valores utilizando -> para acessar os componentes da estrutura
    printf("-- Informacoes do Filme --\n");
    printf("Titulo: %s\nDiretor: %s\nAno de Lancamento: %d/%d/%d\n", ptr->titulo, ptr->diretor, ptr->data_lancamento.dia, ptr->data_lancamento.mes, ptr->data_lancamento.ano);

return 0;
}
