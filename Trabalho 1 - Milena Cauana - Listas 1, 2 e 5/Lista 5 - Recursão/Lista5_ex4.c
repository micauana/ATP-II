/*Milena Cauana - Lista 5 - Exercício 4: Desenvolva uma função recursiva para calcular a sequência de Fibonacci
até o enésimo termo.*/
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

        printf("Forneça um número: ");
        scanf("%d", &numero);

        printf("\n\n========\n\n");

        printf("Fibonacci até o %dº termo: %d\n\n", numero, fib(numero));

return 0;
}
