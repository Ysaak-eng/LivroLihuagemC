#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
valueLeia()
{
    printf("D�gite um numero inteiro ?\n");
}

int valueAntecessor(int value)
{
    int valeuAn = --value;
    return valeuAn;
}
int valueSucessor(int value)
{
    int valeuAn = ++value;
    return valeuAn;
}
void messagemFinal(an, su)
{
    printf("O valor Antecessor � %i ", an);
    printf("\n");
    printf("O valor Sucessor � %i", su);
}

main()
{

    unsigned int valeu = 0, valueAn, valeuSu;

    setlocale(LC_ALL, "Portuguese");

    valueLeia();
    scanf("%d", &valeu);

    valueAn = valueAntecessor(valeu);
    valeuSu = valueSucessor(valeu);
    messagemFinal(valueAn, valeuSu);
    return 0;
}