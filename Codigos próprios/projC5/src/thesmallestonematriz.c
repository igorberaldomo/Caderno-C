#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "thesmallestonematriz.h"

int mainthesmallestonematriz(){
    int matriz[3][3];
    int v = 10, i,j;
    for(i= 0; i < 3;i++){
        for(j= 0; j < 3;j++){
        printf("escreva o elemento da matriz: %d  %d : ", i, j);
        scanf ("%d ", &matriz[i][j]);
        if(v <= matriz[i][j])
        printf(" nada acontece\n");
            if( v > matriz[i][j])
                v = matriz[i][j];
            
        }
    }
    printf("o menor numero é %d\n", v);
    return 0;
}