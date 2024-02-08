#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "mediavetor.h"

int mediavetor(int v[],int n){
    if(n ==0){
        return 0;
    }
    if(n > 0){
        return v[n-1]+ mediavetor(v,n-1);
        }
        return 0;
    }
int mainmediavetor(){
    int vet[5]= {1,4,3,2,2};
    printf(" a media dos numeros do vetor e %d", (mediavetor(vet,5)/ 5));
    return 0;
}