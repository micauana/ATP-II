/*Milena Cauana - Lista 3 - Exercício 4: Acesse os componentes de uma estrutura de aluno (nome, matrıcula, nota)
utilizando o operador ponto ‘.’ e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[100];
    int matricula;
    float nota;

} Aluno;

int main ()
{
    Aluno aluno;

    //Coletando as informações da estrutura
    printf("Nome: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';
    printf("Matricula: ");
    scanf("%d", &aluno.matricula);
    printf("Nota: ");
    scanf("%f", &aluno.nota);

    //Imprimindo os valores
    printf("\n======\n\n");
    printf("Nome: %s\nMatricula: %d\nNota: %.2f\n", aluno.nome, aluno.matricula, aluno.nota);

return 0;
}
