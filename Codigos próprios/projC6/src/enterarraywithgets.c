#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "enterarraywithgets.h"

int mainenterarraywithgets(){
    char array[20];
    printf("digite o que você quer guardar dentro do array: ");
    gets(array);
    printf("%s", array);
    return 0;
}