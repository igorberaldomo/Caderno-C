#include <stdio.h>
#include <stdlib.h>
#include "floattointcast.h"

int mainfloattointcast(){
    float x, y, f = 65.5;
    x = f/10.0; //divide f por 10
    y = (int) (f/10.0); // converte a divisão do float em int e mostra
    printf("x = %f\n", x);// esse ainda é float
    printf("y = %f\n", y); // porque esse é %f em vez de %d já que ele já está convertido na linha 8??
    system ("pause");
    return 0;

}