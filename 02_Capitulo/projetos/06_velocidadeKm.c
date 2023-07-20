#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void pegandoVelocidade(*p)
{
    printf("Dígite qual é a sua velociade ok :");
    scanf("%i", &*p);
}
void convertendoVelocidade(*velocidadeKm, *velocidadeMs)
{
    *velocidadeMs = (*velocidadeKm * 1000);
}
int main(void)
{
    unsigned int velocidadeKm, velocidadeMs;
    pegandoVelocidade(&velocidadeKm);
    convertendoVelocidade(&velocidadeKm, &velocidadeMs);
    
    return 0;
}