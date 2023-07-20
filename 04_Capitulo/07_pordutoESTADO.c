#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void produtoValeu(float *pdtvalue);
void produtoSanf(float *pdtvalue);
void produtoTeste(float *pdtvalue);
void stadadoValeu(int *stdValeu);
void stdImpostoValeu(float pdtvalue, int stdValeu);
void MessagemEstado(float value, float pdtvalue);
///////////////
int main(void)
{
    float pdtvalue;
    unsigned int stdValeu = 0;

    setlocale(LC_ALL, "Portuguese");
    produtoValeu(&pdtvalue);
    produtoTeste(&pdtvalue);
    stadadoValeu(&stdValeu);
    stdImpostoValeu(pdtvalue, stdValeu);
    return 0;
}
///
void produtoValeu(float *pdtvalue)
{
    float produto = 0;
    produtoSanf(&*pdtvalue);
}

void produtoTeste(float *pdtvalue)
{
    while (*pdtvalue <= 0)
    {
        system("cls");
        printf("------------ATENO---------- \n NMERO NO PODE SER MENOR QUE 0 \n");
        produtoSanf(&*pdtvalue);
    }
}
void stadadoValeu(int *stdValeu)
{
    int p = 0;
    do
    {
        system("cls");
        if (p >= 1)
        {
            printf("Atenção estado não encontrado , digite de novo ? \n");
        }
        printf("Digite qual é o seu estado  \n");
        printf("( 1 ) Para Minas Gerais \n");
        printf("( 2 ) Para São Paulo \n");
        printf("( 3 ) Para Rio de Janeiro \n");
        printf("( 4 ) Para Mato Grosso \n");
        scanf("%i", &*stdValeu);
        p++;
    } while (!(*stdValeu > 0 && *stdValeu < 5));
}
void stdImpostoValeu(float pdtvalue, int stdValeu)
{
    float value = 0;
    switch (stdValeu)
    {
    case 1:
        value = (pdtvalue * (0.07));
        MessagemEstado(value, pdtvalue);
        break;
    case 2:
        value = (pdtvalue * 0.12);
        MessagemEstado(value, pdtvalue);
        break;
    case 3:
        value = (pdtvalue * 0.15);
        MessagemEstado(value, pdtvalue);
        break;
    case 4:
        value = (pdtvalue * 0.08);
        MessagemEstado(value, pdtvalue);
        break;
    }
}

/////////////codigos complementares
void produtoSanf(float *pdtvalue)
{
    printf("Qual é o valor do produto : ");
    scanf("%f", *&pdtvalue);
}
void MessagemEstado(float value, float pdtvalue)
{
    int preFinal = value + pdtvalue;
    printf("%2.f", pdtvalue);
    printf("O estado da que você escolheu tem vai colocar %2.f de imposto !! \n", value);
    printf("Então o preço final vai ser %d", preFinal);
}