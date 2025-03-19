/*Milena Cauana - Lista 5 - Exercício 9: Escreva uma funcao recursiva para inverter uma string.*/
#include<stdio.h>

void inverte_string(char str[], int inicio, int fim)
{
    if (inicio >= fim)
    {
        return;
    }
    else
    {
        int aux = str[inicio];
        str[inicio] = str[fim];
        str[fim] = aux;

        inverte_string(str, inicio + 1, fim - 1);
    }
}

int main ()
{
    char string[9] = "abcdefg";
    char string2[9] =  "abcdefgh";
    //Inicializei duas strings, uma com quantidade de elementos impar e outra par, para ver como as duas se comportam

    //Imprimindo a string original e a string após a função
    printf("String original: %s\n", string);
    inverte_string(string, 0, 6);
    printf("String invertida: %s\n", string);
    printf("String original: %s\n", string2);
    inverte_string(string2, 0, 7);
    printf("String invertida: %s\n", string2);

return 0;
}
