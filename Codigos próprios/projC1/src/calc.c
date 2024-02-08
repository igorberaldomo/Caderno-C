#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int soma(int A, int B) { return A + B; }
int subtracao(int A, int B) { return A - B; }
int produto(int A, int B) { return A * B; }
int divisao(int A, int B) { return A / B; }
int mainCalc()
{
    int x, y, z;
    char ch;
    printf("digite uma operacao matematica (+-*/):");
    ch = getchar();
    printf("digite dois numeros separados de bara de espaço");
    scanf("%d %d", &x, &y);
    switch (ch)
    {
    case '+':
        z = soma(x, y);
        break;
    case '-':
        z = subtracao(x, y);
        break;
    case '*':
        z = produto(x, y);
        break;
    case '/':
        z = divisao(x, y);
        break;
    default:
        z = soma(x, y);
    }

    printf("resultado =%d\n", z);
    system("pause");
    return 0;
}
