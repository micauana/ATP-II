/*Milena Cauana - Lista 3 - Exercício 5: Acesse os componentes de uma estrutura de aluno (nome, matricula, nota)
utilizando o operador “->” e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    int matricula;
    float nota;

} Aluno;

int main ()
{
    Aluno aluno;
    Aluno *ptr;

    //Definindo o endereço que será armazenado dentro do ptr
    ptr = &aluno;


    //Coletando as informações
    printf("Nome: ");
    fgets(ptr->nome, sizeof(ptr->nome), stdin);
    ptr->nome [strcspn(ptr->nome, "\n")] = '\0';

    printf("Matricula: ");
    scanf("%d", &ptr->matricula);
    while (getchar() != '\n');//Limpando o buffer

    printf("Nota: ");
    scanf("%f", &ptr->nota);

    //Imprimindo os resultados
    printf("\n=====\n\n");
    printf("Nome: %s\nMatricula: %d\nNota: %.2f\n", ptr->nome, ptr->matricula, ptr->nota);

return 0;
}
