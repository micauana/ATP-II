/*Milena Cauana - Lista 3 - Exercício 8: Declare um arranjo de estruturas para armazenar as informacoes de 5 produtos
(nome, codigo, preco) e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    int codigo;
    float preco;

}Produto;

int main ()
{
    Produto produtos[5];
    int i;

    //Recebendo as informações de cada produto
    for (i = 0; i < 5; i++)
    {
        printf("Produto %d:\n", i + 1);

        printf("Nome: ");
        fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);

        fflush(stdin);

        printf("\n");
    }

    //Imprimindo os valores
    printf("\n\n ========== \n\n");

    for (i = 0; i < 5; i++)
    {
        printf("\n");
        printf("Produto %d:\n", i + 1);

        printf("Nome: %s\n", produtos[i].nome);

        printf("Codigo: %d\n", produtos[i].codigo);

        printf("Preco: %.2f", produtos[i].preco);

        printf("\n");
    }


return 0;
}
