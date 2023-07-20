#include <stdio.h>
#include <stdlib.h>

main(void)
{
    char x;
    int y = 0;
    float z = 0;

    printf("Digite a primeira letra \n");
    scanf("%c", &x);
    printf("Digite um numero inteiro \n");
    scanf("%d", &y);
    printf("Digite um numero real ");
    scanf("%f", &z);

    printf("%c \n %d \n %f ", x, y, z);

    return 0;
}