/*Milena Cauana - Lista 1 - Exercício 8: Escreva um programa em C que leia 8 caracteres e verifique
quantos sao vogais*/
#include<stdio.h>

int main (){
char caracteres[8];
int vogais = 0, i;

printf("Forneça oito caracteres: \n");

//Coletando os caracteres e verificando quantos são vogais
for (i = 0; i < 8; i++){
    fflush(stdin);
    scanf("%c", &caracteres[i]);

    if (caracteres[i] == 'a' || caracteres[i] == 'e' || caracteres[i] == 'i' || caracteres[i] == 'o' || caracteres[i] == 'u'){
        vogais += 1;
    }
}

printf("\n\n=======\n\n");

//Imprimindo a quantidade
printf("Quantidade de vogais: %d", vogais);

return 0;
}
