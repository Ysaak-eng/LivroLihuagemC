#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void setLocalePortuguese(void);
void valueNum(int *nu1, int *nu2);
void validanoNum(int nu1, int nu2);
void digiteNumeros(int *num1, int *num2);
int testeErro(int *num1, int *num2);
void maiorNUm(int nu1, int nu2);
int main(void)
{
    int nu1 = 0, nu2 = 0;
    setLocalePortuguese();
    valueNum(&nu1, &nu2);
    maiorNUm(nu1, nu2);
    return 0;
}
void setLocalePortuguese(void)
{
    setlocale(LC_ALL, "Portuguese");
}

void valueNum(int *nu1, int *nu2)
{
    digiteNumeros(&*nu1, &*nu2);
    testeErro(&*nu1, &*nu2);
}
void digiteNumeros(int *num1, int *num2)
{
    printf("D�gite o primeiro n�mero :");
    scanf("%d", *&num1);
    printf("D�gite o segundo n�mero :");
    scanf("%d", *&num2);
}
void maiorNUm(int nu1, int nu2)
{
    (nu1 > nu2) ? printf("O %d e o maior", nu1) : printf("O %d e o maior", nu2);
}

int testeErro(int *num1, int *num2)
{

    while (*num1 == *num2)
    {
        system("cls");
        printf("------------------ATEN��O----------------------------------\n");
        printf("AMBOS N�MEROS N�O PODE TER O MESMO NUM�RO , DIGITE DE NOVO \n");
        printf("-----------------------------------------------------------\n");
        digiteNumeros(&*num1, &*num2);
    }
}