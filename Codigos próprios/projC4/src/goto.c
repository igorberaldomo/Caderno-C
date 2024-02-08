#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "goto.h"

int maingoto(){
    int i = 0;
    inicio:
    if (i < 5){
        printf("%d\n", i);
        i++;
        goto inicio;
    }
    system("pause"); 
    return 0;
}
