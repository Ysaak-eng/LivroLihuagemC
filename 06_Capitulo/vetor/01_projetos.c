#include <stdio.h>
#include <stdlib.h>
#define Tam 6

void pegandoValeu(int *arr);
void imprimindoVale(int *arr);

int main(void)
{
    int arr[Tam];
    int *p = arr;

    pegandoValeu(&*p);
    imprimindoVale(&*p);

    return 0;
}

void pegandoValeu(int *arr)
{
    for (int i = 0; i < (Tam - 1); i++)
    {
        printf("Digite o valores de %d : ", (i + 1));
        scanf("%d", &arr[i]);
    }
}
void imprimindoVale(int *arr)
{
    printf("Os valores sao \n");
    for (int i = 6 - 1; i >= 0; i--)
    {
        printf("%d - [%d] \n", (i + 1), arr[i]);
    }
}