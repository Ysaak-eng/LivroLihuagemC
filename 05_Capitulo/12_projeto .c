#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void pegandoVelue(int *num);
void testeVelue(int *num);
void sequenciaValeu(int num);

int main(void)
{
    unsigned int num = 0;

    pegandoVelue(&num);
    testeVelue(&num);
    sequenciaValeu(num);

    return 0;
}

void pegandoVelue(int *num)
{
    printf("Digite o numero :");
    scanf("%d", &*num);
}
void testeVelue(int *num)
{
    while (*num < 0)
    {
        system("cls");
        printf("Atencao o numero nao pode ser menor que zero Digite de novo \n");
        pegandoVelue(&*num);
    }
}

void sequenciaValeu(int num)
{
    int i = 0, x = 0;

    
}