#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <stdbool.h>

void valueCelsius(int *grCel);
int limitesGraus(int *grua);
void messagemErr(void);
void conveterCelParaFahren(int gruaCel, float *gralFahren);
void messagemFinal(int gruaCel, float gralFahren);

int main(void)
{
    int gruaCel = 0;
    float gralFahren = 0;

    setlocale(LC_ALL, "Portuguese");

    valueCelsius(&gruaCel);
    conveterCelParaFahren(gruaCel, &gralFahren);
    messagemFinal(gruaCel, gralFahren);

    return 0;
}

void valueCelsius(int *grCel)
{
    int grau = 0;
    printf("Dígite a temperatura :  ");
    scanf("%d", &grau);

    if (limitesGraus(&grau) == 1)
    {
        *grCel = grau;
    }
}
int limitesGraus(int *grau)
{

    while (!(*grau >= 0 && *grau <= 100))
    {
        messagemErr();
        scanf("%d", &*grau);
    }

    return 1;
}

void conveterCelParaFahren(int gruaCel, float *gralFahren)
{
    *gralFahren = (gruaCel * 1.8) + 32;
}

void messagemFinal(int gruaCel, float gralFahren)
{
    printf("----------------\n");
    printf(" A temperatura em Celsius : %d \n A temperatura em Fahrenheit %f \n", gruaCel, gralFahren);
    printf("----------------\n");
}

// err
void messagemErr(void)
{
    printf("---------Atenção----------\n");
    printf("Você tem que colocar a temperatura em Celsius , tem que ser de 0 até 100 \n");
    printf("--------------------------\n");
    printf("Digite de novo :2");
}