//Milena Cauana - Listta 2 _ Exercício 1//
#include<stdio.h>

int main (){

int i, j;
int matriz[3][3]; //Aqui estou declarando o número de elementos

//Declarando a matriz
matriz[0][0] = 1;
matriz[0][1] = 90;
matriz[0][2] = 5;
matriz[1][0] = 60;
matriz[1][1] = 42;
matriz[1][2] = 17;
matriz[2][0] = 93;
matriz[2][1] = 5;
matriz[2][2] = 2;

//Imprimindo os elementos (tentando deixar ela na forma de matriz
printf("MATRIZ:\n");

for(i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (j == 0){
            printf("| %d ", matriz[i][j]);
            } else if (j == 2){
            printf (" %d |\n", matriz[i][j]);
            } else {
            printf("%d", matriz[i][j]);
            }

        }
}
return 0;
}
