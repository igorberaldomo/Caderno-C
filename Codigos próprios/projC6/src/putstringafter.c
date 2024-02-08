#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "putstringafter.h"

int mainputstringafter(){
    char str1[15] = "bom ";
    char str2[15] = "dia";
    strcat(str1,str2);
    printf("%s", str1);
    return 0;
}