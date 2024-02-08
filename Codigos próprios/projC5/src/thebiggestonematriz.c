#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "thebiggestonematriz.h"

int mainthebiggestonematriz(){
    int matriz[4][4];
    int v = 0, i,j;
    for(i= 0; i < 4;i++){
        for(j= 0; j < 4;j++){
        printf("escreva o elemento da matriz: %d  %d : ", i, j);
        scanf ("%d ", &matriz[i][j]);
        if(v >= matriz[i][j])
        printf(" nada acontece\n");
            if( v < matriz[i][j])
                v = matriz[i][j];
            
        }
    }
    printf("é o maior numero %d\n", v);
    return 0;
}