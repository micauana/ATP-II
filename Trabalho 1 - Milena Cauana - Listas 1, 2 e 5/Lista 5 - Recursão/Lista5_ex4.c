/*Milena Cauana - Lista 5 - Exerc�cio 4: Desenvolva uma fun��o recursiva para calcular a sequ�ncia de Fibonacci
at� o en�simo termo.*/
#include<stdio.h>

int fib (int x){

    if (x < 2){
        return x;
    } else {
        return fib(x - 1) + fib(x - 2);
    }
}

int main () {

    int numero;

        printf("Forne�a um n�mero: ");
        scanf("%d", &numero);

        printf("\n\n========\n\n");

        printf("Fibonacci at� o %d� termo: %d\n\n", numero, fib(numero));

return 0;
}
