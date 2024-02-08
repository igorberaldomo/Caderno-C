#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "copyarray.h"

int maincopyarray()
{
    int i;
    char strp[20];
    char str[20] = "hello world ";
    for (i = 0; str[i] != '\0'; i++)
        strp[i] = str[i];
    strp[i] = '\0';
    for (i = 0; i < 20; i++)
        printf("%c", strp[i]);
    return 0;
}