#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "somaunder1000.h"

int mainsomaunder1000(){
    int t = 0;
    printf(" a soma de todos os numeros divisíveis por 5 ou 3 abaixo de 1000 é: ");
    for (int i = 0; i < 1001; i++){
        if(i % 2== 1 && i%3 ==0 && i %5==0){
            t = t +i;
            }
            if(i % 2== 1 && i%3 ==0){
                t = t +i;
            }
                if (i% 2 ==1 && i % 5 ==0){
                t = t +i;
                }
                    if(i == 1000)
                    printf("%d\n", t);
    }   
    system("pause");
    return 0;

}