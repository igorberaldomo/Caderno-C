#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "recursivefibonatti.h"

int recursivefibonatti(int x){
    if(x == 1){
        return 0;}
    if(x == 2){
        return 1;
    }
    else{
        return recursivefibonatti(x-1)+recursivefibonatti(x-2);
        }
        return 0;
    }
int mainrecursivefibonatti(){
    int a;
    printf(" digite o numero que vai ser encontrado o fatorial: ");
    scanf("%d",&a);
    printf("%d",recursivefibonatti(a));
    return 0;

}