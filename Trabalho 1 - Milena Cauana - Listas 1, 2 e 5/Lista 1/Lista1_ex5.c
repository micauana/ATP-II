//Milena Cauana - Lista 1 - Exerc�cio 5//
#include<stdio.h>

int main () {

int numeros_inteiros[5];
int i, j;

printf("Forne�a cinco n�meros inteiros: ");

for (i = 0; i < 5; i++){
    scanf("%d", &numeros_inteiros[i]);
}

printf("\n\n=========\n\n");

//Imprimindo os valores na ordem inversa

printf("Os n�meros na ordem inversa:");

for (j = 4; j >= 0; j--){
    if (j == 0){
            printf(" %d.", numeros_inteiros[j]);
    } else {
        printf(" %d,", numeros_inteiros[j]);
    }

    }
return 0;
}
