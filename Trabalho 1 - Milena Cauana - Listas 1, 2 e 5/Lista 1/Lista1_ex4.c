//Milena Cauana - Lista 1 - Exerc�cio 4//
#include<stdio.h>

//Fazendo a fun��o que calcular� os n�meros de Fibonacci//

int fib(float x){

if (x < 2){
    return x;
} else {
    return fib(x-1) + fib (x-2);
}
}

//Armazenando no array os oito primeiros n�meros de Fibonacci  (a partir do 1?)//

int main () {

float array[8];
int i, a = 1;

 printf("Os oito primeiros n�meros de Fibonacci:");

    for (i = 0; i < 8; i++){
        array[i] = fib(a);
        a++;
        printf(" %.1f ", array[i]);
    }

return 0;
}
