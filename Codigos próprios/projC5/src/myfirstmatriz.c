#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myfirstmatriz.h"

int mainmyfirstmatriz(){
    int mat[100][50];
    int i, j;
    for(i=0;i<100;i++){// para i começando em 0 , i menor que 100 (lembrando que o array vai de 0  a 99), 
                        //some 1 para cada interação
        for(j = 0; j < 50; j++){// para j começando em 0 , j menor que 50 (lembrando que o array vai de 0  a 49), 
                        //some 1 para cada interação
            printf("digite o valor de mat[%d][%d]",i , j); // para cada cedula representada pela linha i coluna j
            scanf("%d", &mat[i][j]);
        }
    }
    system ("pause");
    return 0;
}