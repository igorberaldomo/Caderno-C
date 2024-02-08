#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fibonnati.h"

int mainfibonnati(){
    int a = 0, b = 1, t =1;
    unsigned long long c;
    int i = 1;
     printf("%i\n", a);
     printf("%i\n", b);
        for (; t <= 99; i++){
            c = b + a;
            a = b;
            b = c;
            printf("%llu  ", c);
            t = t + 1;
            printf("%i\n ", t);
            }
            if( t = 100){
            printf(" o enesimo numero de fibonacci é: %llu\n", c);
            }
            system("pause"); return 0;

}