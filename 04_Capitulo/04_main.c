#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void localePortuguese(void);
float salarioFun(void);
void digiteSaL(float *salario);
void erroSalario(float *salario);
float porcentagemSalario(salario);
float emprestomFun(void);
void emprestimoSalario(float salario, float porcentagem);

int main(void)
{
    localePortuguese();
    float salario = 0, porcentagem = 0, emprestimo;
    salario = salarioFun();
    emprestimo = emprestomFun();
    porcentagem = porcentagemSalario(salario);
    emprestimoSalario(salario, porcentagem);
    return 0;
}

void localePortuguese(void)
{
    setlocale(LC_ALL, "Portuguese");
}
float salarioFun(void)
{
    float salario = 0;
    digiteSaL(&salario);
    erroSalario(&salario);
    return salario;
}
float emprestomFun(void)
{
void digiteSaL(float *salari)
}
float porcentagemSalario(salario)
{
    float porcentagem = (salario * (20.0 / 100.0));
    return porcentagem;
}

void erroSalario(float *salario)
{
    while (*salario <= 0)
    {
        system("cls");
        printf("---------------ATEN��O-----------------\n");
        printf("O s�lario n�o pode ser igual e menor que 0\nDigite de novo");
        digiteSaL(&*salario);
    }
}
void digiteSaL(float *salario)
{
    printf("Digite o seu  : ");
    scanf("%f", &*salario);
}