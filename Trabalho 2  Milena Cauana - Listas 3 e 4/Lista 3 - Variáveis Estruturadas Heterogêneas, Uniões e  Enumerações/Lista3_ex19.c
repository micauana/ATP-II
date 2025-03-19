/*Milena Cauana - Lista 3 - Exercício 19: Crie uma fun ̧c ̃ao que recebe uma estrutura de carro (marca, modelo, ano) como
parˆametro e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char marca[50];
    char modelo[50];
    int ano;

}Carro;

void Imprimindo (Carro x)
{
    printf("--Informacoes do carro--\n");
    printf("Marca: %s\n", x.marca);
    printf("Modelo: %s\n", x.modelo);
    printf("Ano: %d\n", x.ano);

}

int main ()
{
    Carro carro;

    //Atribuindo valores para as informacoes de 'carro'
    strcpy(carro.marca, "X");
    strcpy(carro.modelo, "Y");
    carro.ano = 2003;

    //Rodando a função
    Imprimindo(carro);

return 0;
}
