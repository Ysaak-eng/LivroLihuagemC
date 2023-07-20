#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Tam 100

void cls(void);
void nomaCliente(char nome[]);
void valeuPreco(float *preco);
void desVelue(float preco, float *des);
void messagem(void);

int main(void)
{
    char name[Tam];
    float preco = 0, des = 0;

    nomaCliente(name);
    valeuPreco(&preco);
    cls();
    desVelue(preco, &des);

    return 0;
}
void cls(void)
{
    system("cls");
}
void nomaCliente(char nome[])
{
    printf("Qual e o nome ?\n");
    fgets(nome, Tam, stdin);
}
void valeuPreco(float *preco)
{
    printf("Qual e o preco do produto: ");
    scanf("%d", &*preco);
}
void desVelue(float preco, float *des)
{
    if (preco >= 50000)
    {
        messagem();
    }
    else
    {
        printf("O carro tem que ser igual ou maior para receber desconto 50.000");
    }
}

void messagem(void)
{
    int x = 10;
    for (int i = 0; i < 10; ++i)
    {
        printf("(%d) i (%d)x \n ", i, (x--));
    }
}