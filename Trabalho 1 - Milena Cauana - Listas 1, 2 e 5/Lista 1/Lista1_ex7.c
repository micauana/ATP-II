/*Milena Cauana - Lista 1 - Exerc�cio 7: Escreva um programa em C que leia 6 valores de ponto flutu-
ante e calcule a media dos valores.*/
#include<stdio.h>

int main (){

float valores[6], soma;
int i, j;

//Coletando os valores
 printf("Forne�a 6 valores: \n");

 for (i = 0; i < 6; i++){
    scanf("%f", &valores[i]);
 }

 //Somando os valores para poder calcular a m�dia
for (j = 0; j < 6; j++){
    soma += valores[j];
}
printf("\n\n========\n\n");

//Conferindo a soma
    printf("Soma = %.2f", soma);

printf("\n\n=========\n\n");
//Imprimindo e calculando a m�dia
printf("A me1dia dos valores fornecidos �: %.2f", soma/6);

return 0;
}
