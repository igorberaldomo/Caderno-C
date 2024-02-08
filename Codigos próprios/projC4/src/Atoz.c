#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "atoz.h"

int mainatoz(){
    char c;
    for (c = 'A'; c <= 'z';c++){
        printf("letra = %c\n",c);
    }
    system("pause");
    return 0;
}