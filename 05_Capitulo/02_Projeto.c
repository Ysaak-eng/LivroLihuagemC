#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void setLocalePortuguese(void);
void pegandoValue(int *num);
void intValeu(int *num);
void testeVelue(int *num);
void numDecres(int num);

int main(void)
{
    unsigned int num = 0;

    setLocalePortuguese();

    pegandoValue(&num);
    numDecres(num);
    return 0;
}

void pegandoValue(int *num)
{
    intValeu(&*num);
    testeVelue(&*num);
}

void intValeu(int *num)
{
    printf("Dígite o numero : ");
    scanf("%i", *&num);
}

void testeVelue(int *num)
{
    while (*num < 0)
    {
        system("cls");
        printf("---------------------------------\n");
        printf("O número não pode ser com o valor  negativo \n");
        intValeu(*&num);
    }
}

void numDecres(num)
{
    for (int i = num; i > 0; i--)
    {
        printf("%i ", i);
    }
}

///////
void setLocalePortuguese(void)
{
    setlocale(LC_ALL, "Portuguese");
}