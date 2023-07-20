#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void liguagePortugues(void);
void valuesPess(float *alturaPess, float *pesoPess);
void testPess(float *alturaPess, float *pesoPess);
void classPess(float alturaPess, float pesoPess);

int main(void)
{
    float alturaPess = 0, pesoPess = 0;
    liguagePortugues();
    valuesPess(&alturaPess, &pesoPess);
    testPess(&alturaPess, &pesoPess);
    classPess(alturaPess, pesoPess);
    return 0;
}

void liguagePortugues(void)
{
    setlocale(LC_ALL, "Portuguese");
}

void valuesPess(float *alturaPess, float *pesoPess)
{
    printf("Dígite o seu altura : ");
    scanf("%f", &*alturaPess);
    printf("Dígite o seu peso : ");
    scanf("%f", &*pesoPess);
}
void testPess(float *alturaPess, float *pesoPess)
{

    while (!(*alturaPess >= 0.30 && *alturaPess <= 4))
    {
        system("cls");
        printf("-------ATENÇÃO------- \n  ");
        printf("Você só pode colocar altura entre ( 0.30 e 4 )  \n");
        printf("Dígite de novo :");
        scanf("%f", &*alturaPess);
    }

    while (!(*pesoPess >= 0 && *pesoPess <= 600))
    {
        system("cls");
        printf("-------ATENÇÃO------- \n");
        printf("Você só pode colocar peso entre ( 0 e 600 )  \n");
        printf("Dígite de novo :");
        scanf("%f", &*pesoPess);
    }
}
void classPess(float alturaPess, float pesoPess)
{
    if (alturaPess < 1.20 && pesoPess <= 60)
        printf("Classificando [ A ] ");
    else if ((alturaPess >= 1.20 && alturaPess <= 1.70) && pesoPess < 60)
        printf("Classificando [ B ] ");
    else if (alturaPess > 1.70 && pesoPess <= 60)
        printf("Classificando [ C ] ");
    else if (alturaPess < 1.20 && (pesoPess <= 60 && pesoPess >= 90))
        printf("Classificando [ D ] ");
    else if ((alturaPess >= 1.20 && alturaPess <= 1.70) && (pesoPess >= 60 && pesoPess <= 90))
        printf("Classificando [ E ] ");
    else if (alturaPess > 1.70 && (pesoPess >= 60 && pesoPess <= 90))
        printf("Classificando [ F ] ");
    else if (alturaPess < 1.20 && pesoPess < 90)
        printf("Classificando [ G ] ");
    else if ((alturaPess <= 1.20 && alturaPess >= 1.70) && pesoPess < 90)
        printf("Classificando [ H ] ");
    else if (alturaPess > 1.70 && pesoPess > 90)
        printf("Classificando [ I ] ");
}