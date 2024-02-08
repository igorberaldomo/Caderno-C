#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "compare.h"

int compare (int x, int y){
    int z;
    if(x> y)
    z = x;
    else
    z = y;
    
    return z;
}
int maincompare(){
    int a, b;
    
    printf("digite o valor de a: ");
    scanf("%d", &a);
    printf("digite o valor de b: ");
    scanf("%d", &b);
    int test = compare(a,b);
    printf(" o maior e %d", test);
    return 0;
}