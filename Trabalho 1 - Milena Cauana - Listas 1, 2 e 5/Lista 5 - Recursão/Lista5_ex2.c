/*Milena Cauana - Lista 5 - Exerc�cio 2: Implemente uma fun��o recursiva para calcular a soma dos primeiros N
numeros naturais.*/
#include<stdio.h>

int somando (int x){
    if (x == 1){
        return x;
    } else {
        return x + somando(x - 1);
    }
}

int main () {
int n, soma;

printf("Forne�a o n�mero natural n: ");
scanf("%d", &n);

printf("\n\n=========\n\n");

//Armazenando a soma
    soma = somando(n);
    printf("%d", soma);
    printf("\n");

return 0;
}
