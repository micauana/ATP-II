/*Milena Cauana - Lista 3 - Exercício 30: Declare e inicialize uma estrutura aninhada para armazenar as informa ̧c ̃oes de
um ponto (x, y, z) e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

typedef struct Ponto3D
{
    float x;
    float y;
    float z;

} Ponto3d;

typedef struct
{
    char nomePonto;
    Ponto3d ponto;

}InfosPonto;

int main()
{
    //Inicializando o ponto
    InfosPonto infosPonto = {'A', 1.0, 2.0, 3.0};

    //Imprimindo
    printf("Ponto %c: (%.1f, %.1f, %.1f)\n", infosPonto.nomePonto, infosPonto.ponto.x, infosPonto.ponto.y, infosPonto.ponto.z);

return 0;
}
