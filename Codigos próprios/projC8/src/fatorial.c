#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "fatorial.h"

int fatorial1 (int n){
    if( n == 0){
        printf("%d",n);
        return 1;}
    else{
        printf("%d\n",n);
        return n*fatorial1(n-1);}
}
int mainfatorial(){
    int x;
    printf(" digite o numero do fatorial: ");
    scanf("%d", &x);
    fatorial1(x);
    return 0;
}