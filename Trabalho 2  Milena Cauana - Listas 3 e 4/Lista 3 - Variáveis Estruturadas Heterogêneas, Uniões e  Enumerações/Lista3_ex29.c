/*Milena Cauana - Lista 3 - Exercício 29: Acesse os componentes de uma estrutura de cliente (nome, idade, endere ̧co)
utilizando o operador “->” e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    int idade;
    char rua[100];
    int numero_endereco;

} Cliente;

int main ()
{
    Cliente cliente;
    Cliente *ptr;

    //Definindo o endereço que será armazenado dentro do ptr
    ptr = &cliente;


    //Coletando as informações
    printf("Nome: ");
    fgets(ptr->nome, sizeof(ptr->nome), stdin);
    ptr->nome [strcspn(ptr->nome, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &ptr->idade);
    fflush(stdin);

    printf("--Endereco--\n");
    printf("Rua: ");
    fgets(ptr->rua, sizeof(ptr->rua), stdin);
    ptr->rua[strcspn(ptr->rua, "\n")] = '\0';
    printf("Numero: ");
    scanf("%d", &ptr->numero_endereco);

    //Imprimindo os resultados
    printf("\n=====\n\n");
    printf("Nome: %s\nIdade: %d\nEndereco: Rua %s, %d\n", ptr->nome, ptr->idade, ptr->rua, ptr->numero_endereco);

return 0;
}
