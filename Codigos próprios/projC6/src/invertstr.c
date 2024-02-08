#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "invertstr.h"

int maininvertstr()
{
    char str1[15] = "triumfo", str2[15];
    int i, n,fim;
    printf("%lld\n", strlen(str1));
    fim = strlen(str1);
    for (i = fim - 1, n = 0; n < fim;i--, n++)
    {
        str2[n] = str1[i];
    }
    str2[i] = '\0';
    printf("%s", str2);
    return 0;
}