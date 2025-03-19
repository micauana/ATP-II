/*Milena Cauana - Lista 3 - Exercício 21: Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
produto (nome, c ́odigo, pre ̧co) e imprima o resultado.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    int codigo;
    float preco;
} Produto;

int main()
{
    Produto produto;

    //Colocando as informações
    strcpy(produto.nome, "Exemplo");
    produto.codigo = 123;
    produto.preco = 19.99;

    //Imprimindo o tamanho
    printf("Tamanho da estrutura Produto: %d\n", sizeof(produto));

return 0;
}
