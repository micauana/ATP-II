/*Milena Cauana - Lista 3 - Exercício 14: Utilize a declaracao de tipos (typedef) para simplificar a definicao de uma es-
trutura para armazenar as informacoes de um cliente (nome, idade, endereco) e imprima seus valores.*/
#include<stdio.h>
#include<string.h>


typedef struct
{
    int cep;
    char rua[50];
    int numero;

}Endereco;

typedef struct
{
    char nome[50];
    int idade;
    Endereco endereco;

}Cliente;

int main ()
{
    Cliente cliente;

    //Recebendo as informações do cliente
    printf("Nome: ");
    fgets(cliente.nome, sizeof(cliente.nome), stdin);
    cliente.nome[strcspn(cliente.nome, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &cliente.idade);


    printf("--Endereco--\n");
    printf("Cep: ");
    scanf("%d", &cliente.endereco.cep);
    fflush(stdin);
    printf("Rua: ");
    fgets(cliente.endereco.rua, sizeof(cliente.endereco.rua), stdin);
    cliente.endereco.rua[strcspn(cliente.endereco.rua, "\n")] = '\0';
    fflush(stdin);
    printf("Número: ");
    scanf("%d", &cliente.endereco.numero);

    //Imprimindo os valores
    printf("\n\n");
    printf("-- Informacoes do cliente --\n");

    printf("Nome: %s\n", cliente.nome);

    printf("Idade: %d\n", cliente.idade);


    printf("Endereco:\nCep: %d Rua %s, %d\n", cliente.endereco.cep, cliente.endereco.rua, cliente.endereco.numero);

return 0;
}
