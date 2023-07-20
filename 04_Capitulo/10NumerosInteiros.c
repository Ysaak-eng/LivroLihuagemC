#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void valoresInteiros(int *nu1, int *nu2, int *nu3);
void valueIn(int *nu, int num);
void testeNum(int *nu, int num);
int escolhaInteiro(int opc);
void messagemCaculo(int *opc);
void opcTeste(int *opc);
int escolhaCalInteiro(int opc, int nu1, int nu2, int nu3);
float funGeometrica(int nu1, int nu2, int nu3);
float funHarmonica(int nu1, int nu2, int nu3);
float funPonderada(int nu1, int nu2, int nu3);
float funArimetrica(int nu1, int nu2, int nu3);
void messagemFinal(float cacul);

int main(void)
{
    unsigned int nu1 = 0, nu2 = 0, nu3 = 0, opc = 0;
    float cacul = 0;

    valoresInteiros(&nu1, &nu2, &nu3);
    opc = escolhaInteiro(opc);
    cacul = escolhaCalInteiro(opc, nu1, nu2, nu3);
    messagemFinal(cacul);
    return 0;
}
void valoresInteiros(int *nu1, int *nu2, int *nu3)
{
    valueIn(&*nu1, 1);
    valueIn(&*nu2, 2);
    valueIn(&*nu3, 3);
    testeNum(&*nu1, 1);
    testeNum(&*nu2, 2);
    testeNum(&*nu3, 3);
    system("cls");
}

void valueIn(int *nu, int num)
{
    static int i = 0;
    printf("Digite o %i : ", num);
    scanf("%d", &*nu);
    if (i == 3)
    {
        i = 0;
    }
}
int escolhaInteiro(int opc)
{
    printf("Escolha um caculo atraves de um numero \n");
    messagemCaculo(&opc);
    opcTeste(&opc);
    return opc;
}

void opcTeste(int *opc)
{
    while (*opc > 5 || *opc < 0)
    {
        system("cls");
        printf("Voce so pode digitar numero de 1 ate 4 Digite de novo \n");
        messagemCaculo(*&opc);
    }
}

int escolhaCalInteiro(int opc, int nu1, int nu2, int nu3)
{
    float soma = 0;
    switch (opc)
    {
    case 1:
        soma = funGeometrica(nu1, nu2, nu3);
        break;
    case 2:
        soma = funPonderada(nu1, nu2, nu3);
        break;
    case 3:
        soma = funHarmonica(nu1, nu2, nu3);
        break;
    case 4:
        soma = funArimetrica(nu1, nu2, nu3);
        break;
    }

    return soma;
}

float funGeometrica(int nu1, int nu2, int nu3)
{
    return (nu1 * nu2 * nu3);
}
float funPonderada(int nu1, int nu2, int nu3)
{
    return ((nu1 + 2 * nu2 + 3 * nu3) / 6);
}
float funHarmonica(int nu1, int nu2, int nu3)
{
    return (1 / ((1 / nu1) + (1 / nu2) + (1 / nu3)));
}
float funArimetrica(int nu1, int nu2, int nu3)
{
    return ((nu1 + nu2 + nu3) / 3);
}

void testeNum(int *nu, int num)
{
    while (*nu <= 0)
    {
        system("cls");
        printf("----ATENCAO-----\n");
        printf("Numero nao pode ser menor ou iferior a 0 \n");
        valueIn(&*nu, num);
    }
}

void messagemFinal(float cacul)
{
    printf("----------------------------------------\n");
    printf("Atencao o resultado final e : %4.f ", cacul);
    printf("\n----------------------------------------\n");
}

void messagemCaculo(int *opc)
{
    printf("(1) Geometrica \n");
    printf("(2) Ponderado \n");
    printf("(3) Harmonica \n");
    printf("(4) Aritmetica \n");

    scanf("%d", &*opc);
}
