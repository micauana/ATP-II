/*Milena Cauana - Lista 3 - Exercício 7: Crie uma funcao que recebe uma estrutura de aluno (nome, matrıcula, nota)
como parametro e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    int matricula;
    float nota;

}Aluno;

void Imprimindo (Aluno aluno)
{
    printf("\n\n");
    printf("Informacoes do Aluno:\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Nota: %.2f", aluno.nota);
}

int main ()
{
    Aluno aluno;

    //Recebendo as informações
    printf("Nome: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf("Matricula: ");
    scanf("%d", &aluno.matricula);

    printf("Nota: ");
    scanf("%f", &aluno.nota);

    Imprimindo(aluno);

return 0;
}
