#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void valorPremio(int *premio);
int valeuSuccess(int *valeu);
void messagemPremioErr(void);
void podioMessagemPremio(void);
void valorPodeio(int *podio);
int podioErr(int *podioTest);
void PodioMessagemErr(void);
float seuPremio(int premio, int podio);
float primerioLugar(int premio);
float segundoLugar(int premio);
float segundoLugar(int premio);
float terceirpLugar(int premio);
void messagemFinal(float function);

int main(void)
{
    unsigned int premio, podio;
    setlocale(LC_ALL, "Portuguese");

    valorPremio(&premio);
    valorPodeio(&podio);
    messagemFinal(seuPremio(premio, podio));
    return 0;
}

void valorPremio(int *premio)
{
    int valeu = 0;
    printf("Qual é o valor do premio : ");
    scanf("%i", &valeu);

    if (valeuSuccess(&valeu) == 1)
    {
        *premio = valeu;
    }
}
int valeuSuccess(int *valeu)
{
    int err = 1;
    while (*valeu <= 1000)
    {
        messagemPremioErr();
        scanf("%i", &*valeu);
    }

    return err;
}
void valorPodeio(int *podio)
{
    int podioTest = 0;
    podioMessagemPremio();
    scanf("%i", &podioTest);

    if (podioErr(&podioTest) == 1)
    {
        *podio = podioTest;
    }
}
int podioErr(int *podioTest)
{
    int err = 1;
    while (*podioTest > 3 || *podioTest < 1)
    {
        PodioMessagemErr();
        scanf("%i", &*podioTest);
    }

    return err;
}
////////////MESSAGEMS ERROS
void messagemPremioErr(void)
{
    system("cls");
    printf("-------------ATENÇÃO--------------- \n");
    printf("O VALOR TEM QUE SER IGUAL OU SUPERIOR , A (1.0000) \n");
    printf("-------------------------------------- \n");
    printf("DIGITE DE NOVO :");
}
void PodioMessagemErr(void)
{
    system("cls");
    printf("-------------ATENÇÃO--------------- \n");
    printf("O VALOR TEM QUE SER DE 1 ATÉ 3 \n");
    printf("-------------------------------------- \n");
    printf("DIGITE DE NOVO :");
}
////////////MESSAGEMS ERROS FIM
void podioMessagemPremio(void)
{
    int podio = 0;
    printf("-------------------------------------- \n");
    printf("ATENÇÃO- \n");
    printf("Qual posição voce ganhou ? \n");

    for (podio; podio <= 2; podio++)
    {
        printf("%i° LUGAR \n", (podio + 1));
    }
}

// configuração premio
float seuPremio(int premio, int podio)
{
    float ganhadorPremio;
    switch (podio)
    {

    case 1:
        ganhadorPremio = primerioLugar(premio);
        break;
    case 2:
        ganhadorPremio = segundoLugar(premio);
        break;
    case 3:
        ganhadorPremio = terceirpLugar(premio);
        break;
    }
    return ganhadorPremio;
}

float primerioLugar(int premio)
{
    float resultado = 0.46 * premio;
    return resultado;
}
float segundoLugar(int premio)
{
    float resultado = 0.32 * premio;
    return resultado;
}
float terceirpLugar(int premio)
{
    float resultado = 0.22 * premio;
    return resultado;
}
void messagemFinal(float function)
{
    printf("-------------------------\n");
    printf("Parabens , a valor por voce é %4.f", function);
    printf("\n-------------------------\n");
}