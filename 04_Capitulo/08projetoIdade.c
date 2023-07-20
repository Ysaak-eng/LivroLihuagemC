#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void idadePessoaValeu(int *idade);
void idadeTeste(int *idade);
void classIdade(int idade);

main()
{
    unsigned int idade = 0;
    setlocale(LC_ALL, "Portuguese");

    idadePessoaValeu(&idade);
    idadeTeste(&idade);
    classIdade(idade);
    return 0;
}

void idadePessoaValeu(int *idade)
{
    printf("Qual é a sua idade :");
    scanf("%i", &*idade);
}
idadeTeste(int *idade)
{
    while (*idade < 0 || *idade > 200)
    {
        system("cls");
        printf("---------ATENÇÃO--------\n");
        printf("Não e possivel verficar a sua idade , Digíte de Novo \n");
        idadePessoaValeu(&*idade);
    }
}

void classIdade(int idade)
{
    system("cls");
    if (idade >= 1 && idade <= 7)
        printf("Infatil A");
    else if (idade >= 8 && idade <= 10)
        printf("Infatil B");
    else if (idade >= 11 && idade <= 13)
        printf("Juvenil A");
    else if (idade >= 14 && idade <= 17)
        printf("Juvenil B");
    else if (idade >= 18)
        printf("Sênior");
}