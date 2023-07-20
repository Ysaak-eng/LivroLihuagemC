/*10) Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está
entre 97 e 122.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

void valeuPhrase(char phrase[]);
void valuesUpperCase(char phrase[], char upperPhar[]);
void correndoValeu(char upperPhar[]);
void transUpper(char *v);

int main(void)
{
    char phrase[TAM] = {};
    char upperPhar[TAM] = {};
    valeuPhrase(phrase);
    valuesUpperCase(phrase, upperPhar);
    correndoValeu(upperPhar);
    printf("%s", upperPhar);
}

void valeuPhrase(char phrase[])
{
    printf("Digite a frase : ");
    fgets(phrase, TAM, stdin);
}
void valuesUpperCase(char phrase[], char upperPhar[])
{
    strcpy(upperPhar, phrase);
}
void correndoValeu(char upperPhar[])
{
    for (int i = 0; upperPhar[i] != '\0'; i++)
    {
        transUpper(&upperPhar[i]);
    }
}

void transUpper(char *v)
{
    if (*v >= 'a' && *v <= 'z')
        *v -= 32;
}