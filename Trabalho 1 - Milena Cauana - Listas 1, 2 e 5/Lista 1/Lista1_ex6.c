/*Milena Cauana - Lista 1 - Exercício 6: Escreva um programa em C que leia 10 valores inteiros e
calcule a soma de todos os elementos do array.*/
#include<stdio.h>

int main () {

int valores[10];
int i, j;
int soma = 0;

printf("Forneca 10 valores inteiros: ");

//Recebendo os valores que farão parte do array
for (i = 0; i < 10; i++){
    scanf("%d", &valores[i]);
}

//Somando os elementos
for (j = 0; j < 10; j++){
    soma += valores[j];
}

//Imprimindo a soma
printf("Soma dos valores = %d\n", soma);

return 0;
}
