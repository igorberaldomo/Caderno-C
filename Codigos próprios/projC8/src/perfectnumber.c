#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "perfectnumber.h"

int perfect(int x){
    int i, z = 0;
    for( i = 1; i < x ; i++){
        if(x % i == 0){
            z = z + i;
        }
    }
    return z;
}
int mainperfectnumeber(){
    int a, soma = 0;
    printf(" digite o numero que sera decidido se for inteiro ou nao: ");
    scanf("%d",&a);
    soma = perfect(a);
    if(soma == a)
    printf("%d e numero perfeito\n",soma);
    else
    printf("%d nao e numero perfeito\n",soma);
    return 0;
}