#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void messagemInical(void)
{
    printf("Qual é a sua idade \n");
}
int idadePessoa()
{
    int idade;
    printf("Digite a sua idade :");
    scanf("%d", &idade);
    return idade;
}
anoNacimento(int idade, int ano)
{
    int anoNac = ano - idade;
    return anoNac;
}

main(void)
{
    int ano = 2023, anoNac;
    setlocale(LC_ALL, "Portuguese");

    messagemInical();
    printf("---------\n");
    anoNac = anoNacimento(idadePessoa(), ano);
    printf("O ano que nacimento e %d", anoNac);

    return 0;
}