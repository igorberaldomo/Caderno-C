#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "capslock.h"

char caps(char p[],int n){
    int i = 0;
    for(i = 0; i < n ; i++){
        p[i] = (p[i]-32);
    }
    return *p;
}
int maincapslock(){
    char p[20];
    int n;
    printf(" digite a frase a ser colocada em CAPS: \n");
    scanf("%s",&*p);
    n = strlen(p);
    caps(p,n);
    printf("%s", p);
    return 0;
}