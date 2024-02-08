#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "nomemorytrash.h"

int mainnomemorytrash(){
    char array[50] = {'o', 'i', '\0'};
    int i;
    for (i=0; i < 50; i++){
    printf("%c", array[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}