#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "recursiveadd.h"

int recursiveadd(int x, int y){
    if(y ==0){
        return 0 ;
    }
    if(y > 0){
        return x + recursiveadd(x,y-1);
        }
        return 0;
    }
int mainrecursiveadd(){
    int a, b;
    printf(" digite o numero: ");
    scanf("%d",&a);
    printf(" digite a quantidade de vezes a ser somado ");
    scanf("%d",&b);
    printf("%d",recursiveadd(a,b));
    return 0;

}