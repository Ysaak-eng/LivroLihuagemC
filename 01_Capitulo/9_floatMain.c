#include <stdio.h>
#include <stdlib.h>

main(void)
{
    float x = 0, y = 0;

    printf("Digite os numeros : ");
    scanf("%f %f", &x, &y);
    printf("Os valores sao %2.f %2.f ", y, x);
    return 0;
}