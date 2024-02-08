#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "seriesXplus.h"

int calcseries (int a){
    int s =0, p, d, i;
    for(i = 0 ; i <= a; i++){
        p = (a*a)+ 1;
        d = a+3;
        s = s +(p/d);
    }
    printf("%d\n", s);
return s;
}

int mainseriesXplus(){
    int n;
    printf("digite o nume de interações da funcao(n² + 1/ n +3) que será necessárias para obter o numero desejado: ");
    scanf("%d", &n);
    calcseries(n);
    printf("%d\n", n);
    return 0;
}
