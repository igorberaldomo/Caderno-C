#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "copystringwithstrcpy.h"

int maincopystringwithstrcpy(){
    char str1[100], str2[100];
    printf("entre com uma string: ");
    gets(str1);
    strcpy(str2,str1);
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    return 0;
}