#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "firstfor.h"

int mainfirstfor()
{
    int i;
    char str1[10], str2[10];
    printf("entre com uma string: ");
    gets(str1);
    printf("String 1: %s\n", str1);
    for (i = 0; str1[i] != '\0' && i <4;i++)
        str2[i] = str1[i];
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    return 0;
}