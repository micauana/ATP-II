/*Milena Cauana - Lista 3 - Exercício 9: Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
pessoa (nome, idade, altura) e imprima o resultado.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    int idade;
    float altura;

}Pessoa;

int main ()
{
    Pessoa pessoa;

    //Definindo cada informação da estrutura
    strcpy(pessoa.nome, "Milena Cauana Rejani Eduardo");
    pessoa.idade = 20;
    pessoa.altura = 1.64;

    //Imprimindo o tamanho da estrutura
    printf("Tamanho da estrutura: %d", sizeof(pessoa));
}
