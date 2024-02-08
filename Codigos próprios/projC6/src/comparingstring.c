#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "comparingstring.h"

int maincomparingstring(){
    char str1[100], str2[100];
    printf("Entre com uma string: ");
    gets(str1);
    printf("Entre com outra string: ");
    gets(str2);
    if(strcmp(str1,str2) == 0)
        printf("Strings iguais\n");
    else
        printf("Strings diferentes\n");
    return 0;
}