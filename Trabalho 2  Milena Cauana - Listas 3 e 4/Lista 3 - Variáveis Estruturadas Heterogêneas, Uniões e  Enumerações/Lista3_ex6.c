/*Milena Cauana - Lista 3 - Exercício 6: Declare e inicialize uma estrutura aninhada para armazenar as informacoes de
uma data (dia, mes, ano) e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
}DataNasc;

typedef struct
{
    DataNasc dataNasc;
    char nome[50];
    int idade;
    int ra;

}Aluno;

int main ()
{
    Aluno aluno;

    //Definindo valores para cada elemento da estrutura
    printf("Nome: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &aluno.idade);

    printf("RA: ");
    scanf("%d", &aluno.ra);

    printf("Data de Nascimento (dd mm aaaa): ");
    scanf("%d", &aluno.dataNasc.dia);
    scanf("%d", &aluno.dataNasc.mes);
    scanf("%d", &aluno.dataNasc.ano);

    //Imprimindo os valores
    printf("\n========\n");
    printf("Informacoes do aluno:\n");
    printf("Nome: %s\nIdade: %d\nRA: %d\nData de Nascimento: %d/%d/%d", aluno.nome, aluno.idade, aluno.ra, aluno.dataNasc.dia, aluno.dataNasc.mes, aluno.dataNasc.ano);

return 0;
}
