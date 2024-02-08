#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fputs.h"

int mainfputs(){
    char texto[30] = "hello world\0";
    printf("a frase armazenada em texto e %s\n",texto);
    fputs(texto,stdout);
    printf("\ndepois do fputs a frase e %s\n", texto);
    return 0;
}