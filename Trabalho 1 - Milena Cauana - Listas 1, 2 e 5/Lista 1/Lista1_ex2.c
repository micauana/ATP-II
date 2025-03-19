//Milena Cauana - Lista 1 - Exercício 2//

#include<stdio.h>

int main () {

char letras [5] = {'a', 'b', 'c', 'd', 'e'};
int i;

//Qual melhor usar?

printf ("%s\n", letras);

for (i = 0; i < 5; i++){
    printf("%c\n", letras[i]);
}

return 0;
}
