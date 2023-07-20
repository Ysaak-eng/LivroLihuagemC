#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void pegandoValeuReal(float *real);
int convertendoReal(float dolar, float real);
void messagemFinal(float function, float real, float dolar);
void errMessagem(void);
void errValeu(float *realValeu);

int main(void)
{
    float real = 0, dolar = 4.77;

    setlocale(LC_ALL, "Portuguese");

    pegandoValeuReal(&real);
    messagemFinal(convertendoReal(dolar, real), real, dolar);

    return 0;
}

void pegandoValeuReal(float *real)
{
    float realValeu = 0;
    printf("Dígite o valor em reais :");
    scanf("%f", &realValeu);
    errValeu(&realValeu);

    *real = realValeu;
}
int convertendoReal(float dolar, float real)
{
    float realcvd = real / dolar;
    return realcvd;
}
void messagemFinal(float function, float real, float dolar)
{
    printf("-------------------------\n");
    printf("O o dólar esta contado no dia de hoje (%2.f USD) \n e o seu dinheiro está (%2.f BRL) \n convertendo seu dinheriro para dolar ele tá (%2.f USD ) ", dolar, real, function);
}
void errValeu(float *realValeu)
{
    while (*realValeu <= 20)
    {
        errMessagem();
        printf("Dígite o valor em reais :");
        scanf("%f", &*realValeu);
    }
}
void errMessagem()
{
    printf("-------------ALERTA-------------\n");
    printf("O valor tem ser maior que 19 reis \n");
    printf("Digite de novo !!!!\n");
    printf("---------------------------------\n");
}
