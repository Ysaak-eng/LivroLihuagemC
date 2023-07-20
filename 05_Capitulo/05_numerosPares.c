#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void setLocalePortuguese(void);
void pegandoValue(int *num);
void intValeu(int *num);
void testeVelue(int *num);
int numDecres(int num);
void MessagemFina(int function);

int main(void)
{
    unsigned int num = 0;

    setLocalePortuguese();

    pegandoValue(&num);

    MessagemFina(numDecres(num));
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

int numDecres(num)
{
    int i = 0, x = 0;

    for (i; i <= num; i += 2)
    {
        x += i;
    }
    return x;
}

void MessagemFina(int function)
{
    printf("O resultado final e \n");
    printf("%d", function);
}

///////
void setLocalePortuguese(void)
{
    setlocale(LC_ALL, "Portuguese");
}