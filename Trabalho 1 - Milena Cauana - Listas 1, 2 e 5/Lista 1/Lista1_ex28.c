/*Milena Cauana - Lista 1 - Exerc�cio: Escreva um programa em C que leia uma string e substitua
todas as ocorr�ncias de um caractere por outro.*/
#include<stdio.h>
#include<string.h>

int main ()
{
    char string[100];
    char caractere;
    char novo_caractere;
    int i;

    //Recebendo a string e o caractere que sera substituido
    printf("Escreva uma palavra, frase ou texto: ");
    fgets(string, 100, stdin);
    printf("\n");
    printf("Caractere que dever� ser substituido: ");
    scanf("%c", &caractere);
    printf("\n");
    fflush(stdin);
    printf("Caractere que substituir�: ");
    scanf("%c", &novo_caractere);
    printf("\n\n");

    //Substituindo na string
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == caractere)
        {
            string[i] = novo_caractere;
        }
    }

    //Imprimindo a nova string
    printf("Nova string: %s", string);

return 0;
}
