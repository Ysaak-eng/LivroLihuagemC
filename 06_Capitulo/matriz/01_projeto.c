#include <stdio.h>
#include <stdlib.h>
#define Tam 4

void valueMatr(int *arr);

int main(void)
{

    int matr[Tam][Tam];
    int *p = matr;

    valueMatr(*&p);

    return 0;
}

void valueMatr(int *arr)
{
    for (int i = 0; i <= Tam; ++i)
    {
        for (int x = 0; x <= Tam; ++i)
        {
            printf("Digite a posiçao do %d %d ", i, x);
            scanf("%d", &arr[i][x]);
        }
    }
}