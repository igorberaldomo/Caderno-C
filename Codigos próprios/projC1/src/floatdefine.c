#include <stdio.h>
#include <stdlib.h>
#include "floatdefine.h"

int mainfloatdefine(){
    #define x 1.234// não precisa declarar a variavel antes porque o #define já assumi que é do tipo float
    printf("%f\n",x);
    system ("pause");
    return 0;

}