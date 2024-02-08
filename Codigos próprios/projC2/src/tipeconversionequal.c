#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tipeconversionequal.h"

int maintipeconversion(){
    int x = 65;
    char ch;
    float f = 25.1;
    // ch recebe 8 bits menos significativos de x
    // converte para tabela ASCII
    ch = x;  // ch recebe 8 bits menos significativos de x e converte para ASCII
    printf("ch = %c\n",ch);
    x = f; // x recebe apenas parte inteira de f
    printf("x = %d\n",x);
    f = ch;// f recebe valor 8 bits convertido para real
    printf("f = %f\n",f);
    f = x; //recebe o valor de x
    printf("f = %f\n",f);
    system ("pause");
    return 0;

}