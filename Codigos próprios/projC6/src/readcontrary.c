#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "readcontrary.h"

int mainreadcontrary()
{
    int i, n;
    char str1[10], str2[10];
    printf("entre com uma string: ");
    gets(str1);
    printf("String 1: %s\n", str1);
    for (i = 0; str1[i] != '\0' && i <10;){
        str2[i] = str1[i];
        i++;}
    printf("%d e i\n", i);
    n = i + 1;
    printf("%d e n\n", n);
    for ( i = 0; n > i;){
        printf(" %c", str2[n]);
        n--;}
    return 0;
}