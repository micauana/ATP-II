//Fibonacci - tentando aula//

#include<stdio.h>

int fib (int x){

    if (x < 2){
        return x;
    }else {
        return fib(x-1) + fib(x-2);
    }
}


int main (){

int numero, fibonacci;

printf("Forneça um número inteiro: ");
scanf("%d", &numero);

printf("\n\n==============\n\n");

fibonacci = fib(numero);

printf("Fibonacci = %d", fibonacci);

printf("\n\n");

return 0;
}
