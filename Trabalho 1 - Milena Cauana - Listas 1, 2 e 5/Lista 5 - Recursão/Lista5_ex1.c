//Milena Cauana - Lista 5 - Exerc�cio 1//
#include<stdio.h>

int fatorial (int x){
    if (x == 0){
        return 1;
    } else {
        return x * fatorial (x - 1);
    }

}

int main () {

    int numero;

    printf("Forne�a um n�mero: ");
    scanf("%d", &numero);

    printf("\n\n============\n\n");

    printf("Fatorial de %d = %d\n\n", numero, fatorial(numero));

return 0;
}
