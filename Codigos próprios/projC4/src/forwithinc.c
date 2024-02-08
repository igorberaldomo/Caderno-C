#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "forwithinc.h"

int mainforwithinc(){
    int a, b, c;
    printf("digite o valor de a");
    scanf("%d", &a);
    printf("digite o valor de b");
    scanf("%d", &b);
    for (c = a; c <= b; c = c +2 ){
        printf("%d\n",c);
    }
    for(c = a; c <= b; scanf("%d",&c)){
        printf("%d\n",c);
    }
    system("pause");
    return 0;
}