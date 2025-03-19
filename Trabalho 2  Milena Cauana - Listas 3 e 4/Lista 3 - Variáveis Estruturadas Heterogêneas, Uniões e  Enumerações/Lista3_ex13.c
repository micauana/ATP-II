/*Milena Cauana - Lista 3 - Exerc�cio 13: Declare e inicialize uma estrutura para armazenar as informacoes de um fun-
cionario (nome, salario, departamento) e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    float salario;
    int departamento;

}Funcionario;

enum Departamentos
{
    X,
    Y,
    Z,
};

int main ()
{
    Funcionario funcionario;

    //Recebendo as informa��es do funcionario
    printf("Forneca as informacoes do funcionario: \n");

    printf("Nome: ");
    fgets(funcionario.nome, sizeof(funcionario.nome), stdin);
    funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0';

    printf("Salario: ");
    scanf("%f", &funcionario.salario);

    do
    {
        printf("Departamento: (digite o codigo referente ao departamento)");
        scanf("%d", &funcionario.departamento);

    } while (funcionario.departamento < 0 || funcionario.departamento > 2); //Implementamos um do while para que somente os c�digos v�lidos sejam de fato armazenados

    //Imprimindo as informa��es
    printf("\n\n ============ \n\n");

    printf("Informacoes do funcionario: ");

    printf("Nome: %s\n", funcionario.nome);
    printf("Salario: %.2f\n", funcionario.salario);
    printf("Departamento: ");

    switch (funcionario.departamento)
    {
    case  X:
        printf("X\n");
        break;
    case  Y:
        printf("Y\n");
        break;
    case  Z:
        printf("Z\n");
        break;
    }


    return 0;
}
