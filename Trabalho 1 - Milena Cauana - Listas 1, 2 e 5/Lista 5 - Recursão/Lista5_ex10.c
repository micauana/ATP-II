/*Milena Cauana - Lista 5 - Exercicio 10: Implemente uma funcao recursiva para calcular a soma dos dıgitos de um
numero inteiro.*/
#include<stdio.h>

int soma(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return (num % 10) + soma(num / 10);
    }
}

int main ()
{
    int numero;

    //Coletando o número
    printf("Forneca um numero: ");
    scanf("%d", &numero);

    //Imprimindo a soma
    printf("\nSoma dos digitos: %d\n", soma(numero));


return 0;
}
