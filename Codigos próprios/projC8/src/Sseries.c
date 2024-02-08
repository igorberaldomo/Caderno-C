#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Sseries.h"
int square2(int a){
    return (a*a);
}

int Sseries(int n){
    if(n <= 0){
        return 0;
    }
    if(n > 0){
        return (1+square2(n)/(float)n) + Sseries(n-1);
    }
    return 0;
}

int mainSseries(){
    int a;
    printf(" digite o numero que vai ser usado na funcao ((1+n²)/n) ");
    scanf("%d",&a);
    printf("%d",Sseries(a));
    return 0;
}