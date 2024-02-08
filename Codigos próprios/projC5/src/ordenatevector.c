#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ordenatevector.h"

int mainordenatevector(){
    int i, number;
    int vector[10];
    for (i = 0 ; i < 10;i++){
        printf(" digite o numeros do elementos Nº %d: ",i);
        scanf("%d", &vector[i]);
    }
    for (i = 0 ; i < 10;){
    vector[i] = number;
    if (number >= vector[i]){
    i++;}
        else{
        if (number < vector[i])
        i--;
        i--;
        number = vector[i];
        }
        for (i = 0 ; i < 10; i++)
        printf("%d" , vector[i]);
        return 0;
    }
}