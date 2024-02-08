#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"resultofexpression.h"

int mainresultofexpression(){
    int x = 10, y = 20, w;
    w = x * y;
    printf("w = %d\n",w);
    w = y/10;
    printf("w = %d\n",w);
    printf("x+y=%d\n",x+y);
    system("pause");
    return 0;

}