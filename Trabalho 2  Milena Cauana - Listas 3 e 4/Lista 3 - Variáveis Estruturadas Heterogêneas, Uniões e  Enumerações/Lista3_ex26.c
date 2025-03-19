/*Milena Cauana - Lista 3 - Exercício 26: Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a defini ̧c ̃ao de uma estru-
tura para armazenar as informa ̧c ̃oes de um professor (nome, disciplina, sal ́ario)
e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    char disciplina[50];
    float salario;
} Professor;

int main()
{

    //Inicializando
    Professor prof = {"Milena Cauana", "Computação", 5000.00};

    //Imprimindo as informações
    printf("Nome: %s\nDisciplina: %s\nSalário: %.2f\n", prof.nome, prof.disciplina, prof.salario);

return 0;
}
