/*Milena Cauana - Lista 3 - Exercício 18: Declare e inicialize uma estrutura aninhada para armazenar as informa ̧c ̃oes de
um endere ̧co (rua, n ́umero, cidade) e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char rua [60];
    int numero;
    char cidade[60];

}Endereco;

typedef struct //Aqui iremos iniciar uma struct para poder aninhar o endereco
{
    char nome[50];
    Endereco endereco;

}Informacoes;

int main ()
{
    Informacoes informacoes;

    //Adicionando as informações
    strcpy(informacoes.nome, "Milena Cauana");
    strcpy(informacoes.endereco.rua, "Rua Teste");
    informacoes.endereco.numero = 12;
    strcpy(informacoes.endereco.cidade, "Presidente Prudente");

    //Imprimindo as informações
    printf("--Informacoes--\n");
    printf("Nome: %s\nEndereco: %s, n %d\nCidade: %s\n", informacoes.nome,informacoes.endereco.rua, informacoes.endereco.numero, informacoes.endereco.cidade);

return 0;
}
