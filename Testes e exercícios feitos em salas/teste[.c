#include <stdio.h>
struct retangulo {
char cor[10];
float largura, altura;
};

void ler_retangulo(struct retangulo *ret) {

scanf("%f%f%s", &(*ret).largura, &(*ret).altura, &(*ret).cor);
return ret;
}

float area_retangulo(struct retangulo ret) {
return ret.largura * ret.altura;
}
int main () {
struct retangulo ret;
ler_retangulo(&ret);
printf("A area eh %.2f.\n", area_retangulo(ret) );
}
