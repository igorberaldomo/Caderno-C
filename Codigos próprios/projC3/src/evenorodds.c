#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "evenorodds.h"

int mainevenorodds(){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    if(x % 2 ){
        printf("%d é impar\n",x);
    }
    else {
        printf(" %d é par\n",x);
    }
    system("pause");
    return 0;
}