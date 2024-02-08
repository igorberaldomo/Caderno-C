#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "recursivefatorial.h"

int recursivefatorial(int x){
    if(x ==0){
        return 1 ;
    }
    if(x > 0){
        return x *recursivefatorial(x-1);
        }
        return 0;
    }
int mainrecursivefatorial(){
    int a;
    printf(" digite o numero que vai ser encontrado o fatorial: ");
    scanf("%d",&a);
    printf("%d",recursivefatorial(a));
    return 0;

}