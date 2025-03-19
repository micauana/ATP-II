/*Milena Cauana - Lista 3 - Exercício 31: Crie uma fun ̧c ̃ao que recebe uma estrutura de funcion ́ario (nome, sal ́ario, de-
partamento) como parˆametro e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    float salario;
    char departamento[50];

} Funcionario;

void imprimirFuncionario(Funcionario funcionario)
{
    printf("Nome: %s\n", funcionario.nome);
    printf("Salário: %.2f\n", funcionario.salario);
    printf("Departamento: %s\n", funcionario.departamento);

}

int main()
{

    //Inicializando
    Funcionario funcionario;

    //Recebendo as informações
    printf("Nome: ");
    fgets(funcionario.nome, sizeof(funcionario.nome), stdin);
    funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0';

    printf("Salario: ");
    scanf("%f", &funcionario.salario);
    fflush(stdin);

    printf("Departamento: ");
    fgets(funcionario.departamento, sizeof(funcionario.departamento), stdin);
    funcionario.departamento[strcspn(funcionario.departamento, "\n")] = '\0';

    //Imprimindo as informações
    imprimirFuncionario(funcionario);

return 0;
}
