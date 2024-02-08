#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tentozerocountdown.h"

int maintentozerocountdown(){
    int i , s = 0;
    for (i = 10; i>= 0; i--){
        i = i - s;
        printf("%d\n",i);
    }
    printf("fim\n");
    system("pause");
    return 0;
}