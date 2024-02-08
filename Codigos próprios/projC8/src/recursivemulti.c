#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "recursivemulti.h"

int recursivemulti(int x, int y){
    if(y ==0){
        return 1 ;
    }
    if(y > 0){
        return x*recursivemulti(x,y-1);
        }
        return 0;
    }
int mainrecursivemulti(){
    int a, b;
    printf(" digite a base: ");
    scanf("%d",&a);
    printf(" digite o expoente ");
    scanf("%d",&b);
    printf("%d",recursivemulti(a,b));
    return 0;

}