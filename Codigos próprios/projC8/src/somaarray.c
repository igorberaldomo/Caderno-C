#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "somaarray.h"

int somacont(int *b,int m){
    int a = 0;
    int i;
    for(i = 0; i < m; i++){
    a = a + b[i];
    }
    printf("a soma dos elementos do array b e %d", a);
    return 0;

}

int mainsomaar(){
    int b[10]= {5,5,5,5,5,5,5,5,5,5};
    somacont(b, 10);
    return 0;
}
