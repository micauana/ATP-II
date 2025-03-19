/*Milena Cauana - Lista 3 - Exercício 11: Utilize a definicao de tipos enumeraveis para representar os dias da semana e
imprima os valores.*/
#include<stdio.h>
#include<string.h>

enum dias_semana
{
    Domingo = 1,
    Segunda,
    Terca,
    Quarta,
    Quinta,
    Sexta,
    Sabado,
};

int main  ()
{
    int i = 1;

    for (i; i < 8; i++)
    {
        switch (i)
        {
        case Domingo:
            printf("Domingo.\n");
            break;
        case Segunda:
            printf("Segunda.\n");
            break;
        case Terca:
            printf("Terca.\n");
            break;
        case Quarta:
            printf("Quarta.\n");
            break;
        case Quinta:
            printf("Quinta.\n");
            break;
        case Sexta:
            printf("Sexta.\n");
            break;
        case Sabado:
            printf("Sabado.\n");
            break;

        }
    }

return 0;
}
