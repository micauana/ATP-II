/*Milena Cauana - Lista 3 - Exercício 25: Declare e inicialize uma estrutura para armazenar as informa ̧c ̃oes de um aluno
(nome, matr ́ıcula, nota) e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    int matricula;
    float nota;
} Aluno;

int main() {
    Aluno aluno = {"Milena Cauana", 12345, 8.5}; //Essa é outra forma de inicializar uma struct

    //Imprimindo os valores
    printf("Nome: %s\nMatricula: %d\nNota: %.1f\n", aluno.nome, aluno.matricula, aluno.nota);

return 0;
}
