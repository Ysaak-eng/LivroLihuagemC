

#include <stdio.h>

void printFloydTriangle(int n)
{
    int count = 1;
    int num = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
            count++;
        }
        printf("\n");
    }
}

int main()
{
    int N;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    printFloydTriangle(N);

    return 0;
}