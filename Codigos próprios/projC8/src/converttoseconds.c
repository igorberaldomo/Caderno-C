#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "converttoseconds.h"

int hours(int x){
    int u;
    u = 60*60*x;
    return u;
}
int minutes(int y){
    int v;
    v = 60*y;
    return v;
}

int mainconverttoseconds(){
    int a,b,c;
    printf("digite as horas: ");
    scanf("%d", &a);
    printf("digite os minutos: ");
    scanf("%d", &b);
    printf("digite os segundos: ");
    scanf("%d", &c);
    int h = hours(a);
    int m = minutes(b);
    int result = h + m + c;
    printf("tem %d segundos em %d:%d:%d", result,a,b,c);
    return 0;
}