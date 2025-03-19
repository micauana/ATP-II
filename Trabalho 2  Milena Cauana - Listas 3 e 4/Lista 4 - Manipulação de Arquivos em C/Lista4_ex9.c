/*Milena Cauana - Lista 4 - Exercício 9: Escreva um programa em C para contar o n ́umero de registros em um
arquivo binario.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Como no exercício não ficou muito claro que tipo de registro é,
irei criar um registro de aluno que consta nome e ra, tal qual o exercício anterior,
para poder utilizar o arquivo criado para o exercício anterior*/

typedef struct
{
    int ra;
    int telefone;
    char nome[14];
} Registro;

int main ()
{
    FILE *arquivoBinario;
    Registro registro;
    int cont = 0;

    //Abrindo o arquivo binario para leitura
    arquivoBinario = fopen("arquivo_binario.bin", "rb");
    if (arquivoBinario == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    //Contando o numero de registros, levando em consideração que ele conta com dois inteiros + 14 chars
    while (fread(&registro, sizeof(Registro), 1, arquivoBinario) == 1) //A função retorna o numero de intens de tamanho size que foram efetivamente lidos
    {
        cont ++;
    }

    //Imprimindo o numero de registros encontrados
    printf("Foram encontrados %d registros.\n", cont);

    //Fechando o arquivo
    fclose(arquivoBinario);

return 0;
}
