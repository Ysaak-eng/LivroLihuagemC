#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define TAM 3

void setLocaleportuguese(void);
void pegandoValoresArray(int *array);
void testeArray(int *ind);
void valueNegativo(int *ind);
void valueMaiores(int *ind);
int mediaValeu(int *array);

int main(void)
{
    int array[TAM];
    int *p = array;

    setLocaleportuguese();
    pegandoValoresArray(&*p);
    printf("A media e :%d", mediaValeu(&*p));
    return 0;
}

void setLocaleportuguese(void)
{
    setlocale(LC_ALL, "Portuguese");
}

void pegandoValoresArray(int *array)
{

    for (int i = 0; i < TAM; ++i)
    {
        printf("Dígite o valor de %i : ", (i + 1));
        scanf("%d", &array[i]);
        testeArray(&array[i]);
    }
}
void testeArray(int *ind)
{
    valueNegativo(&*ind);
    valueMaiores(&*ind);
}

void valueNegativo(int *ind)
{

    while (*ind < 0)
    {

        system("cls");
        printf("Os valores não pode ser negativo \n ");
        printf("Dígite um novo valor :");
        scanf("%d", *&ind);
        system("cls");
    }
}

void valueMaiores(int *ind)
{
    while (*ind > 100)
    {

        system("cls");
        printf("Os valores não pode maior que 100 \n ");
        printf("Dígite um novo valor :");
        scanf("%d", *&ind);
        system("cls");
    }
}

int mediaValeu(int *array)
{
    int media = 0;
    for (int i = 0; i < TAM; i++)
    {
        media += array[i];
    }
    return (media /= TAM);
}