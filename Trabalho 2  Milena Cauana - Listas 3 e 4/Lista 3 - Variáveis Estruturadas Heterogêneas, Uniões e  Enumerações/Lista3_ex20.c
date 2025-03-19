/*Milena Cauana - Lista 3 - Exercício 20: Declare um arranjo de estruturas para armazenar as informa ̧c ̃oes de 3 livros
(t ́ıtulo, autor, ano de publica ̧c ̃ao) e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char titulo[100];
    char autor[60];
    int anoDePublicacao;

}Livro;

int main ()
{
    Livro livros[3];


    //Arrecadando as informações dos livros
    for (int i = 0; i < 3; i++)
    {
        printf("--Livro %d--\n", i + 1);

        printf("Titulo: ");
        fgets(livros[i].titulo, sizeof(livros[i].titulo), stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';

        printf("Autor: ");
        fgets(livros[i].autor, sizeof(livros[i].autor), stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';

        printf("Ano de Publicacao: ");
        scanf("%d", &livros[i].anoDePublicacao);

        fflush(stdin);

        printf("\n\n");

    }

    //Imprimindo o que foi armazenado
    printf("\n\n========\n\n");
    printf("--Informacoes armazenadas--\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("--Livro %d--\n", i + 1);
        printf("Titulo: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano de Publicacao: %d\n", livros[i].anoDePublicacao);

        printf("\n\n");

    }

return 0;
}
