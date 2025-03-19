//Milena Cauana - Lista 5 - Exercício 7: Crie uma funçao recursiva para calcular a potencia de um numero.//
#include<stdio.h>

int potencia (int x, int pot){
    if (pot == 0){
        return 1;
    } else {
        return x * potencia(x, pot - 1);
    }

}

int main () {

    int numero, expoente, resultado;

    //Coletando qual será a potência

        printf("Forneça um número e qual será sua potência (ex: 2 4 = dois elevado a quatro): ");
        scanf("%d", &numero);
        scanf("%d", &expoente);

        printf("\n\n=====\n\n");

    //Utilizando a função para sair a potência

        resultado =  potencia(numero,expoente);

        printf("%d ^ %d = %d", numero, expoente, resultado);

        printf("\n\n");

return 0;
}
