#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "esvaziarflores.h"

void esvaziarvaso(int flores){
   if(flores>0){
    esvaziarvaso(flores - 1);
   }
}
int mainesvaziarflores(){
    int i;
    printf("digite i: ");
    scanf("%d", &i);
    esvaziarvaso(i);
    return 0;
}