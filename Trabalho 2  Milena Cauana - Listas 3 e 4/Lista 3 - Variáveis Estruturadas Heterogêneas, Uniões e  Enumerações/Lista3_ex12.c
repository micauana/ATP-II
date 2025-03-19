/*Milena Cauana - Lista 3 - Exercício 12: Resolva um problema de cadastro de alunos utilizando estruturas.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    int ra;
    float nota;

}Aluno;

void Recebendo(Aluno aluno[], int x)
{
    fflush (stdin);

    printf("\n");

    printf("Aluno %d:\n", x + 1);

    printf("Nome: ");
    fgets(aluno[x].nome, sizeof(aluno[x].nome), stdin);
    aluno[x].nome[strcspn(aluno[x].nome, "\n")] = '\0';

    printf("RA: ");
    scanf("%d", &aluno[x].ra);

    printf("Nota: ");
    scanf("%f", &aluno[x].nota);

    fflush(stdin);

    printf("\n");
}

void Imprimindo(Aluno aluno[], int x)
{
    printf("Aluno %d:\n", x + 1);

    printf("Nome: %s\n", aluno[x].nome);

    printf("RA: %d\n", aluno[x].ra);

    printf("Nota: %.2f\n", aluno[x].nota);

    printf("\n\n");
}

int main ()
{
    int quantidade; //Iremos perguntar para o usuário a quantidade de alunos que serão fornecidos

    printf("Quantidade de alunos: ");
    scanf("%d", &quantidade);

    Aluno aluno[quantidade];

    //Recebendo as informações de cada aluno
    for (int i = 0; i < quantidade; i++)
    {
        Recebendo(aluno, i);
    }

    //Imprimindo as informações que foram armazenadas
    for (int i = 0; i < quantidade; i++)
    {
        Imprimindo(aluno, i);
    }

return 0;
}
