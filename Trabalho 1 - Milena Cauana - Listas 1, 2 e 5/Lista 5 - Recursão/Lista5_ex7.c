//Milena Cauana - Lista 5 - Exerc�cio 7: Crie uma fun�ao recursiva para calcular a potencia de um numero.//
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

    //Coletando qual ser� a pot�ncia

        printf("Forne�a um n�mero e qual ser� sua pot�ncia (ex: 2 4 = dois elevado a quatro): ");
        scanf("%d", &numero);
        scanf("%d", &expoente);

        printf("\n\n=====\n\n");

    //Utilizando a fun��o para sair a pot�ncia

        resultado =  potencia(numero,expoente);

        printf("%d ^ %d = %d", numero, expoente, resultado);

        printf("\n\n");

return 0;
}
