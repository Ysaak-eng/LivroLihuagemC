#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Tam 100

void valueArray(char frase[], char frase2[]);
char substuirArray(void);
void vogaisArray(char frase[], char frase2[], char letr, int *vgu);
void qtdVoagias(char v, int *vgu);
void substuirFraseArray(char *v, char letr);
void cosoanteArray(char frase[], int vgu, int *coat);
void messagemFinal(char frase[], char frase2[], int vgu, int coat);

main(void)
{
    char frase[Tam], frase2[Tam];
    int vgu = 0, coat = 0;
    valueArray(frase, frase2);
    vogaisArray(frase, frase2, substuirArray(), &vgu);
    cosoanteArray(frase, vgu, &coat);
    messagemFinal(frase, frase2, vgu, coat);
    return 0;
}

void valueArray(char frase[], char frase2[])
{
    printf("Digite uma frase .\n");
    fgets(frase, Tam, stdin);
    strcpy(frase2, frase);
}
void vogaisArray(char frase[], char frase2[], char letr, int *vgu)
{
    for (int i = 0; frase[i] != '\0'; i++)
    {
        qtdVoagias(frase[i], *&vgu);
        substuirFraseArray(&frase2[i], letr);
    }
}
void qtdVoagias(char v, int *vgu)
{
    if ((v == 'a') || (v == 'e') || (v == 'i') || (v == 'o') || (v == 'u'))
    {
        (*vgu)++;
    }
}
char substuirArray(void)
{
    char letr = 0;
    printf("Digite uma (letra) :");
    scanf("%c", &letr);

    return letr;
}
void substuirFraseArray(char *v, char letr)
{
    if ((*v == 'a') || (*v == 'e') || (*v == 'i') || (*v == 'o') || (*v == 'u'))
    {
        *v = letr;
    }
}

void cosoanteArray(char frase[], int vgu, int *coat)
{
    *coat = ((strlen(frase) - vgu) - 1);
}
void messagemFinal(char frase[], char frase2[], int vgu, int coat)
{
    system("cls");
    printf("-------------------\n");
    printf("A frase Incial foi %s", frase);
    printf("( %i ) Vogais \n", vgu);
    printf("( %i ) Consoantes \n", coat);
    printf("A frase final ficou %s ", frase2);
    printf("\n-------------------");
}