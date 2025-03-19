/*Milena Cauana - Lista 3 - Exercício 23: Utilize a defini ̧c ̃ao de tipos enumer ́aveis para representar os meses do ano e
imprima os valores.*/
#include<stdio.h>
#include<string.h>

enum Meses
{
    Janeiro = 1,
    Fevereiro,
    Marco,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro,
};

int main()
{

    for (int i = Janeiro; i <= Dezembro; i++)
    {
        switch (i)
        {
        case Janeiro:
            printf("Janeiro.\n");
            break;
        case Fevereiro:
            printf("Fevereiro.\n");
            break;
        case Marco:
            printf("Marco.\n");
            break;
        case Abril:
            printf("Abril.\n");
            break;
        case Maio:
            printf("Maio.\n");
            break;
        case Junho:
            printf("Junho.\n");
            break;
        case Julho:
            printf("Julho.\n");
            break;
        case Agosto:
            printf("Agosto.\n");
            break;
        case Setembro:
            printf("Setembro.\n");
            break;
        case Outubro:
            printf("Outubro.\n");
            break;
        case Novembro:
            printf("Novembro.\n");
            break;
        case Dezembro:
            printf("Dezembro.\n");
            break;

        }
    }

return 0;
}
