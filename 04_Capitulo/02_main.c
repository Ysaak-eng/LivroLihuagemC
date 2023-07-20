#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void setLolcalePortuguese(void);
void valueNum(int *nu1, int *nu2);
void verficandoNum(int nu1, int nu2);
void maiorNum(num);
void igualNum(num, num2);

int main(void)
{
    int nu1 = 0, nu2 = 0;
    setLolcalePortuguese();
    valueNum(&nu1, &nu2);
    verficandoNum(nu1, nu2);
    return 0;
}

void setLolcalePortuguese(void)
{
    setlocale(LC_ALL, "Portuguese");
}
void valueNum(int *nu1, int *nu2)
{
    printf("Qual � o primeiro n�mero : ");
    scanf("%i", &*nu1);
    printf("Qual � o segundo n�mero : ");
    scanf("%i", &*nu2);
}
void verficandoNum(int nu1, int nu2)
{
    if (nu1 > nu2)
        maiorNum(nu1);
    if (nu1 < nu2)
        maiorNum(nu2);
    if (nu1 == nu2)
        igualNum(nu1, nu2);
}
void maiorNum(num)
{
    printf("------------------------ \n");
    printf("MAIOR � O %d \n", num);
    printf("------------------------");
}
void igualNum(num, num2)
{
    printf("------------------------ \n");
    printf("O N�MERO %d E %d S�O IGUAIS \n", num, num2);
    printf("------------------------");
}
