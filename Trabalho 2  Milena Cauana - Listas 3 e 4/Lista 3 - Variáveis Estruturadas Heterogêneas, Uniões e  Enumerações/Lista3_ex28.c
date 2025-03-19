/*Milena Cauana - Lista 3 - Exercício 28: Acesse os componentes de uma estrutura de cliente (nome, idade, endere ̧co)
utilizando o operador ponto ‘.’ e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[100];
    int idade;
    char rua[100];
    int numero_endereco;

} Aluno;

int main ()
{
    Aluno aluno;

    //Coletando as informações da estrutura
    printf("Nome: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &aluno.idade);
    fflush(stdin);

    printf("--Endereco--\n");
    printf("Rua: ");
    fgets(aluno.rua, sizeof(aluno.rua), stdin);
    aluno.rua[strcspn(aluno.rua, "\n")] = '\0';
    printf("Numero: ");
    scanf("%d", &aluno.numero_endereco);

    //Imprimindo os valores
    printf("\n======\n\n");
    printf("Nome: %s\nIdade: %d\nEndereco: Rua %s, %d\n", aluno.nome, aluno.idade, aluno.rua, aluno.numero_endereco);

return 0;
}
