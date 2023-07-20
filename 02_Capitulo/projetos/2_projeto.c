#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{
    unsigned int nu1, nu2, nu3;
    float soma = 0;
    printf("Digite o primeiro numero :");
    scanf("%i", &nu1);
    printf("Digite o segundo numero :");
    scanf("%i", &nu2);
    printf("Digite o terceiro numero :");
    scanf("%i", &nu3);

    soma = (int)(nu1 + nu2 + nu3);
    printf("O a soma e %2.f", soma);
}