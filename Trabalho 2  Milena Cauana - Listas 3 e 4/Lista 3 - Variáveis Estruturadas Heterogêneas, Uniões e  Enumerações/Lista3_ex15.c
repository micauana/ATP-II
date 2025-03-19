/*Milena Cauana - Lista 3 - Exercício 15: Atribua os valores de uma estrutura de Endereco para outra e imprima os valores
da nova estrutura.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    int cep;
    char rua[50];
    int numero;

}Endereco;

int main ()
{
    Endereco endereco1, endereco2;

    //Atribuindo os valores para endereco1
    endereco1.cep = 0504600;
    strcpy(endereco1.rua, "Teste de nome de rua");
    endereco1.numero = 2;

    //Atribuindo os valores para endereco2
    endereco2 = endereco1;

    //Imprimindo os valores de endereco2
    printf("--Informações do Endereco--\n");

    printf("Cep: %d\n Rua %s, %d\n", endereco2.cep, endereco2.rua, endereco2.numero);


return 0;
}
