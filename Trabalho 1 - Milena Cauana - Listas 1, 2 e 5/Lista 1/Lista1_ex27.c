/*Milena Cauana - Lista 1 - Exercício 27: Escreva um programa em C que leia uma string e verifique
se ela  e um palındromo.*/
#include<stdio.h>
#include<string.h>
#include<math.h>

int main ()
{
    char string[30];
    int tamanho, palindromo = 1;

    //Lendo a string
    printf("Escreva a palavra: ");
    fgets(string, 30, stdin);

    //Descobrindo quantos caracteres foram armazenados
    tamanho = strlen(string) - 2; //como o fgets armazena '\n' por último, retiramos um além do '/0'
    printf("\n");
    printf("Tamanho = %c\n", string[tamanho]);//observando o que esta armazenado em tamanho
    printf("Tamanho dividido por dois: %d", tamanho/2 + 1);

    //Observando se é uma concatenação
    for (int i = 0; i != (tamanho/2 + 1); i++)
    {
        if (string[i] != string[tamanho - i])
        {
            palindromo = 0;
            break;
        }
    }

    //Imprimindo o resultado
    printf("\n\n========\n\n");

    if (palindromo == 0)
    {
        printf("Nao eh um palindromo.\n");
    }
    else
    {
        printf("Eh um palindromo.\n");
    }


return 0;
}
