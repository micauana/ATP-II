/*Milena Cauana - Lista 3 - Exercício 27: Atribua os valores de uma estrutura de contato para outra e imprima os valores
da nova estrutura.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    char telefone[20];//Estou inicializando com char dessa vez para ficar certinho do jeito ()xxx-xxx

}Contato;


int main()
{

    //Inicializando as variáveis
    Contato contato1 = {"Milena Cauana", "(11)1234-5678"};
    Contato contato2;

    //Colocando as informações de contato1 em contato2
    contato2 = contato1;

    //Imprimindo
    printf("Contato 2: %s - %s\n", contato2.nome, contato2.telefone);

return 0;
}
