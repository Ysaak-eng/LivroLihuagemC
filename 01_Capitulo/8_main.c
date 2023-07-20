#include <stdio.h>
#include <stdlib.h>

main(void)
{
    unsigned int x = 0, z = 0;

    printf("Digite o primeiro valor ");
    scanf("%d", &x);
    printf("Digite o segundo valor");
    scanf("%d", &z);

    printf("Os valores invero sao %d %d", z, x);

    return 0;
}