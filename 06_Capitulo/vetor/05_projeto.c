#include <stdio.h>
#include <locale.h>
#define TAM 8
void localePotguese(void);
void arrayValeus(int i, int *arr1);

int main(void)
{
    float arr1[TAM] = {0};
    float array[TAM] = {0};
    int *p = arr1;
    localePotguese();
    arrayValeus(1, *p);
}

void localePotguese(void)
{
    setlocale(LC_ALL, "Portuguese");
}