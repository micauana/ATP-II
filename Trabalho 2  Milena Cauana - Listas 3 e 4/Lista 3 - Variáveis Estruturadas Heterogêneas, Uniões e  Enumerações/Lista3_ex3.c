/*Milena Cauana - Lista 3 - Exercício 3: Atribua os valores de uma estrutura para outra e imprima os valores da nova
estrutura.*/
#include<stdio.h>
#include<string.h>


//Criando a primeira estrutura
typedef struct
{
    int inteiro;
    float real;
    char string[6];

} Estrutura1;

int main ()
{
    //Criando variáveis para cada estrutura
    Estrutura1 teste1;
    Estrutura1 teste2;

    //Definindo valores para cada elemento da estrutura 1
    teste1.inteiro = 10;
    teste1.real = 12.3;
    strcpy (teste1.string, "Oi!");

    //Copiando os valores da estrutura1 para a estrutura2
    teste2 = teste1;

    //Imprimindo os valores da estrutura2
    printf("Inteiro: %d\nReal: %.2f\nString: %s\n", teste2.inteiro, teste2.real, teste2.string);

return 0;
}
