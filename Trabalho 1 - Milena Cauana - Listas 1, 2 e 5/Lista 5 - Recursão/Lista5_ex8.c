/*Milena Cauana - Lista 5 - Exerc�cio 8: Desenvolva uma fun�ao recursiva para calcular o MDC (Maximo Divisor
Comum) de dois numeros.*/
#include<stdio.h>

int mdc(int x1, int x2)
{
    //Caso base seria quando os dois n�o dividem mais pelos mesmos primos
    if ((x1 % 2 != 0 && x2 % 2 != 0) && (x1 % 3 != 0 && x2 % 3 != 0) && (x1 % 5 != 0 && x2 % 5 != 0))
    {
        return 1;
    }
    else
    {
        if (x1 % 2 == 0 && x2 % 2 == 0)
        {
            x1 = x1 / 2;
            x2 = x2 / 2;

            return 2 * mdc(x1, x2);
        }
        else if (x1 % 3 == 0 && x2 % 3 == 0)
        {
           x1 = x1 / 3;
           x2 = x2 / 3;

            return 3 * mdc(x1, x2);
        }
        else if (x1 % 5 == 0 && x2 % 5 == 0)
        {
            x1 = x1 / 5;
            x2 = x2 / 5;

            return 5 * mdc(x1, x2);
        }
        return 1;
    }
}

int main ()
{
    int numero1, numero2;

    //Recebendo os valores dos n�meros em que ser� calculado o mdc
    printf("Forne�a dois n�meros: ");
    scanf("%d" "%d", &numero1, &numero2);

    //Imprimindo o resultado da fun��o recursiva
    printf("\n\n=========\n\n");

    printf("MDC de %d e %d: %d\n", numero1, numero2, mdc(numero1, numero2));

return 0;
}
