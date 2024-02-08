#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "fibonacci.h"

int fibo(int n){
    if (n == 0 || n == 1){
        return n;}
    else{
        return fibo(n-1)+ fibo(n-2);}
printf("%d",n);
}
int mainfibonacci(){
    int x;
    printf(" digite o numero que voce quer achar a sequencia de fibonacci: ");
    scanf("%d", &x);
    fibo(x);
    return 0;
}