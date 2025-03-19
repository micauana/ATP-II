//Milena Cauana - Lista 5 - Exercício 5: Escreva uma funçao recursiva para verificar se um número  ́e primo.//
#include<stdio.h>
#include<math.h>

int primo(int x, int z){


        if (x % z != 0 && z <= sqrt(x)){
                z++;
            return primo(x, z);
        } else {
            if(z > sqrt(x)){
                return 1;
            }
            else{
                return 0;
            }
        }
}

int main () {

    int numero, variavel;

    printf("Forneca um numero: ");
    scanf("%d", &numero);

    variavel = primo(numero, 2);

    printf("\n\n====\n\n");

    if (variavel == 1){
            printf("Eh primo.");
        } else {
            printf("Nao eh primo");
        }

    printf("\n\n");

return 0;
}
