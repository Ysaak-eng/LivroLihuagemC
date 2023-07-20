#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void)
{
    int dia = 0, mes = 0, ano = 0;

    printf("Digite o dia \n ");
    scanf("%d", &dia);
    printf("Digite o mes \n ");
    scanf("%d", &mes);
    printf("Digite o ano \n ");
    scanf("%d", &ano);

    printf("%d/%d/%d", dia, mes, ano);

    return 0;
}