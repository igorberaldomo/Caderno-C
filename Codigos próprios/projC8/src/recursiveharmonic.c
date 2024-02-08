#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "recursiveharmonic.h"

double recursiveharmonic(float n,int hn){
    if(hn ==0){
        return 0;
    }else{
        return 1/n + recursiveharmonic(1/(1+n),hn-1);
    }
}

int mainrecursiveharmonic(){
    int a = 0;
    int b = 0;
    printf("digite o valor tanto de a quanto de b: ");
    scanf("%d",&a);
    b = a;
    recursiveharmonic(a,b);
    return 0;
}