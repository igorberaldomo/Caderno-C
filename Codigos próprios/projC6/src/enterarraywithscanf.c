#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "enterarraywithscanf.h"

int mainenterarraywithscanf(){
    char array[20];
    printf("digite o que você quer guardar dentro do array: ");
    scanf("%s", array);
    printf("%s", array);
    return 0;
}