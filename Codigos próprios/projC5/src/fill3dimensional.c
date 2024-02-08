#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "fill3dimensional.h"

int mainfill3dimensional(){
    int cub[5][5][5];
    int i,j,k;
    for(i=0; i<5;i++){ 
        for(j=0; j<5;j++){
            for(k=0; k<5;k++){
                cub[i][j][k] = 0;
            
            }
        }

    }
    system("pause");
    return 0;
}