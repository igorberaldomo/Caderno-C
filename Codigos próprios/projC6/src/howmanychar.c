
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "howmanychar.h"

int mainhowmanychar()
{
    int i;
    char str1[10];
    char str2[10];
    printf("entre com uma string: ");
    gets(str1);
    for (i = 0; str1[i] != '\0';i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("String 1 tem %d letras", i);
    return 0;
}