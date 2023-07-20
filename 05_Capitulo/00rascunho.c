#include <stdio.h>

void valuesArray(int *array)
{
    for (int i = 0; i <= 5; i++)
    {
        printf("Digite o numero %i  : ", (i + 1));
        scanf("%i", &array[i]);
    }
}

int main(void)
{
    int array[6] = {1, 2, 10, 4, 5, 6};
    int *p = array;

    valuesArray(&*p);

    printf("\n");
    for (int i = 0; i <= 5; i++)
    {
        printf("%d  ", array[i]);
    }

    return 0;
}