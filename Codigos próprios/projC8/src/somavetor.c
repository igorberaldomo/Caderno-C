#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "somavetor.h"

int somavetor(int v[],int n){
    if(n ==0){
        return 0;
    }
    if(n > 0){
        return v[n-1]+ somavetor(v,n-1);
        }
     return 0; 
    }
int mainsomavetor(){
    int vet[5]= {1,4,3,2,2};
    printf(" a soma dos numeros do vetor e %d", somavetor(vet,5));
    return 0;
}