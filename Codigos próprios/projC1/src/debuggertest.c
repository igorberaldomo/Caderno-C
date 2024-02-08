#include <stdio.h>
#include <stdlib.h>
#include "debuggertest.h"

int fatorial(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int mainDebuggertest()
{
    int x, y;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("X e positivo.\n");
        y = fatorial(x);
        printf("fatorial de X e %d.\n", y);
    }
    else
    {
        if (x < 0)
            printf("X e negativo.\n");
        else
            printf("X e Zero.\n");
    }
    printf("fim do progama.\n");
    system("pause");
    return 0;
}
