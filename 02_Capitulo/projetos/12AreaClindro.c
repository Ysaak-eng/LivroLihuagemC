#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void liguagemPortugues(void);
void pegandoDados(float *altura, float *raio);
void larguraClindro(float *largura, float raio);
float valorCindro(float largura, float alturaCil, float pi);
void messagemFinal(float function);

void main(void)
{
    float alturaCil = 0, pi = 3.141592, raio = 0, largura = 0;
    liguagemPortugues();
    pegandoDados(&alturaCil, &raio);
    larguraClindro(&largura, raio);

    messagemFinal(valorCindro(largura, alturaCil, pi));
    return 0;
}
void liguagemPortugues(void)
{
    setlocale(LC_ALL, "Portuguese");
}
void pegandoDados(float *altura, float *raio)
{
    printf("Dígite a altura do cilindro :");
    scanf("%f", &*altura);
    printf("Dígite a raio do cilindro :");
    scanf("%f", &*raio);
}
void larguraClindro(float *largura, float raio)
{
    *largura = (raio * 2);
}

float valorCindro(float largura, float alturaCil, float pi)
{
    float volumeCdro = pi * (alturaCil * largura);
}
void messagemFinal(float function)
{
    printf("-----------------------------------\n");
    printf("A área do Cilindro é %f \n", function);
    printf("-----------------------------------");
}