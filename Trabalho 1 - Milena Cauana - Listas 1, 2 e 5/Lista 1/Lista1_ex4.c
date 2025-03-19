//Milena Cauana - Lista 1 - Exercício 4//
#include<stdio.h>

//Fazendo a função que calculará os números de Fibonacci//

int fib(float x){

if (x < 2){
    return x;
} else {
    return fib(x-1) + fib (x-2);
}
}

//Armazenando no array os oito primeiros números de Fibonacci  (a partir do 1?)//

int main () {

float array[8];
int i, a = 1;

 printf("Os oito primeiros números de Fibonacci:");

    for (i = 0; i < 8; i++){
        array[i] = fib(a);
        a++;
        printf(" %.1f ", array[i]);
    }

return 0;
}
