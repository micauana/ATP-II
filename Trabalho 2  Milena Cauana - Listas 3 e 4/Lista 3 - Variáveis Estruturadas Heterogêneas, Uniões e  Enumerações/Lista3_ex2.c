/*Milena Cauana - Lista 3 - Exercício 2: Utilize a declaracao de tipos (typedef) para simplificar a definicao de uma es-
trutura para armazenar as informacoes de um carro (marca, modelo, ano) e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
    char marca[50];
    char modelo[50];
    int ano;

} Carro;

int main ()
{
    //Criando a variável do tipo Carro
    Carro informacoes;

    //Arrecadando as informações do usuário
    printf("Marca: ");
    fgets(informacoes.marca, sizeof(informacoes.marca), stdin);
    //Tirando o '\n' da string
    informacoes.marca[strcspn(informacoes.marca, "\n")] = '\0';
    printf("Modelo: ");
    fgets(informacoes.modelo, sizeof(informacoes.modelo), stdin);
    //Tirando o '\n' da string
    informacoes.modelo[strcspn(informacoes.modelo, "\n")] = '\0';
    printf("Ano: ");
    scanf("%d", &informacoes.ano);

    //Imprimindo as informações na tela
    printf("\n=====\n\n");
    printf("Marca: %s\nModelo: %s\nAno: %d\n", informacoes.marca, informacoes.modelo, informacoes.ano);

return 0;
}
