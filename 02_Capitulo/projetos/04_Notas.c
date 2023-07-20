#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void valuesNotas(float *not1, float *not2, float *not3, float *not4);
float mediaNotas(float *not1, float *not2, float *not3, float *not4);
void messagemFinal(float media);

int main(void)
{
    float not1, not2, not3, not4, media;

    setlocale(LC_ALL, "Portuguese");

    valuesNotas(&not1, &not2, &not3, &not4);
    media = mediaNotas(&not1, &not2, &not3, &not4);
    messagemFinal(media);
}

void valuesNotas(float *not1, float *not2, float *not3, float *not4)
{
    printf("Dígite a primeira nota ");
    scanf("%f", *&not1);
    printf("Dígite a segunda  nota ");
    scanf("%f", *&not2);
    printf("Dígite a terceira nota ");
    scanf("%f", *&not3);
    printf("Dígite a quarto nota ");
    scanf("%f", *&not4);
}
float mediaNotas(float *not1, float *not2, float *not3, float *not4)
{
    float media = (*not1 + *not2 + *not3 + *not4) / 4;
    return media;
}
void messagemFinal(float media)
{
    int Media = (int)(media);
    printf("A média é %i", Media);
}
