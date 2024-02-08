#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "joao.h"

int mainjoao(){
    char array[10] = {'j', 'o', 'a', 'o', '\0'};
    int i;
    for(i = 0; i <10; i++){
        printf("%c", array[i]);
    }
    printf("\n");
    return 0;
}