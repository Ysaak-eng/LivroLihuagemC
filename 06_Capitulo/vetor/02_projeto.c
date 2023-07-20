#include <stdio.h>
#include <stdlib.h>
#define Tam 6

void arrayValeu(int arr[]);
int posicaSaoma123(int arr[]);
void posicaoArray(int *psc, int arr[]);
void leiaArray(int arr[]);
void testePosocicao(int *psc);
void posicaoPcs(int *psc);

int main(void)
{
    int arr[Tam];
    int soma = 0, psc = 0;
    arrayValeu(arr);
    soma = posicaSaoma123(arr);
    posicaoArray(&psc, arr);

    printf("(%d)  Ola povo", psc);
    return 0;
}

void arrayValeu(int arr[])
{
    printf("Digite os valores\n ");
    for (int i = 0; i < Tam; i++)
    {
        printf("(%d) - : ", (i + 1));
        scanf("%d", &arr[i]);
    }
}

int posicaSaoma123(int arr[])
{
    int soma;

    for (int i = 0; i < 3; i++)
    {
        soma += arr[i];
    }
    return soma;
}
void posicaoArray(int *psc, int arr[])
{
    system("cls");
    leiaArray(arr);
    posicaoPcs(&psc);
    testePosocicao(&psc);
    printf("%d", *psc);
}

void leiaArray(int arr[])

{
    int i = 0;
    while (i < 6)
    {
        printf("(%d) - %d \n", (i + 1), arr[i]);
        i++;
    }
}
void testePosocicao(int *psc)
{
    while (*psc <= 0 || *psc >= 7)
    {
        system("cls");
        printf("O valor pode ser de 1 de 6 \n");
        printf("Digite de novo :");
        scanf("%d", *&psc);
    }
}

void posicaoPcs(int *psc)
{
    printf("Digite a posicao \n");
    scanf("%d", psc);
}