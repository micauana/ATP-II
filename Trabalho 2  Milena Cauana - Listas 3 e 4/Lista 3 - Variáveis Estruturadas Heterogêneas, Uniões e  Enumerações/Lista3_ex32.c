/*Milena Cauana - Lista 3 - Exercício 32: Declare um arranjo de estruturas para armazenar as informa ̧c ̃oes de 4 produtos
(nome, c ́odigo, pre ̧co) e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    int codigo;
    float preco;

} Produto;

int main() {

    Produto produtos[4];

    //Recebendo as informações
    for (int i = 0; i < 4; i++) {

        printf("\n\n-- Produto %d --\n", i + 1);
        printf("Nome: ");
        fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);
        fflush(stdin);

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
        fflush(stdin);

    }

    //Imrpimindo
    printf("\n\n--- Produtos Cadastrados ---\n");
    for (int i = 0; i < 4; i++) {
        printf("Nome: %s, Codigo: %d, Preco: %.2f\n", produtos[i].nome, produtos[i].codigo, produtos[i].preco);
    }
    return 0;
}
