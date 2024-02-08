#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "changeleters.h"

int mainchangeleters()
{
    char str[] = "o cachorro do vizinho nao para de latir";
    printf("String: %s\n", str);
    printf("Nova String: ");
    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            str[i] += 7;
            if (str[i] >= 91 && str[i] <= 93)
                str[i] = 64 + str[i] % 90;
            if (str[i] >= 123 && str[i] <= 125)
                str[i] = 122 + str[i] % 125;
        }
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
