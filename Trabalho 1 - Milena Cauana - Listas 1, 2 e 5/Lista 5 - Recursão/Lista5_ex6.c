/*Milena Cauana - Lista 5 - Exerc�cio 6: Implemente uma fun�ao recursiva para imprimir os elementos de um array
na ordem inversa.*/
#include<stdio.h>

int inverso(int vetor[], int fim){

    if (fim == 0)
        {
            printf(" %d.", vetor[fim]);
        } else
        {
            printf(" %d", vetor[fim]);
            return inverso(vetor, fim - 1);
        }

}
int main (){

    int array[10];

    //Coletanfo o vetor

    printf("Forne�a dez n�meros inteiros: ");

    for(int i = 0; i < 10; i++)
        {
            scanf("%d", &array[i]);
        }

        printf("\n\n====\n\n");
    //Exibindo a fun��o

    printf("Array na ordem inversa: ");

    inverso(array, 9);

    printf("\n\n");

return 0;
}
