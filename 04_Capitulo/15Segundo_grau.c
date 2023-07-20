#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void pegandoValeus(int *a, int *b, int *c);
void valeusGral(int *num, char l);
float raizEquacao(int a, int b, int c);

int main(void)
{
    int a = 0, b = 0, c = 0;
    pegandoValeus(&a, &b, &c);
    float raizEquacao(a, b, c);
    printf("%i , %i , %i", a, b, c);
    return 0;
}

void pegandoValeus(int *a, int *b, int *c)
{
    valeusGral(&*a, 'a');
    valeusGral(&*b, 'b');
    valeusGral(&*c, 'c');
}
void valeusGral(int *num, char l)
{
    printf("Digite o valor da letra %c : ", l);
    scanf("%i", &*num);
}
///////
float raizEquacao(int a, int b, int c)
{
    int detalta = b

}