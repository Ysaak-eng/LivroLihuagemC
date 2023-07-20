#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void localePortuguese(void);
int valueNum(void);
void verficarNum(num);
int main()
{
    localePortuguese();
    verficarNum(valueNum());
}

void localePortuguese(void)
{
    setlocale(LC_ALL, "Portuguese");
}
int valueNum(void)
{
    int num;
    printf("Dígite o número :");
    scanf("%d", &num);
    return num;
}
void verficarNum(num)
{
    (num % 2 == 0) ? printf("O valor %d e Par", num) : printf("O valor %d e imper", num);
}