#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "recursiveinvert.h"

int recursiveinvert(int x[], int y){
    if(y ==0){
        printf("%d", x[y]);
        return 0;
    }
    if(y > 0){
        printf("%d", x[y]);
        return recursiveinvert(x,y-1);
        }
        return 0;
    }
int mainrecursiveinvert(){
    int vet[10] = {10,15,32,43,65,6,78,01,27,32};
    recursiveinvert(vet ,10);
    return 0;

}