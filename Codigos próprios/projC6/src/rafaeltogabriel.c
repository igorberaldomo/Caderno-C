#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "rafaeltogabriel.h"

int mainrafaeltogabriel(){
    char array[10] = {'g', 'a', 'b', 'r', 'i', 'e', 'l', '\0'};
    int i;
    for(i = 0; i <10; i++){
        printf("%c", array[i]);
    }
    printf("\n");
    array[0] = 'r';
    array[2] = 'f';
    array[3] = 'a';
    array[4] = 'e';
    array[5] = 'l';
    array[6] = '\0';
      for(i = 0; i <10; i++){
        printf("%c", array[i]);
    }
    printf("\n");
    return 0;
}