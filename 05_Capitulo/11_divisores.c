#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void pegandoNum(int *num);
void testeValeu(int *num);
void divisoresNum(int num);

int main(void)
{
    unsigned int num = 0;
    pegandoNum(&num);
    testeValeu(&num);
    divisoresNum(num);
    return 0;
}

void pegandoNum(int *num)
{
    printf("Digite um valor : ");
    scanf("%d", &*num);
}
void testeValeu(int *num)
{

    while (*num < 0)
    {
        system("cls");
        printf("O numero nao pode ser menor que zero \n");
        pegandoNum(&*num);
    }
}
void divisoresNum(int num)
{

    for (int i = 1; i <= num; i++)
    {
        if ((num % i) == 0)
        {
            printf("%d  8", i);
        }
    }
}