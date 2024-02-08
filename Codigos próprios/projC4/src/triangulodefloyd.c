#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "triangulodefloyd.h"

int maintriangulodefloyd(){
    int n = 6;
    int i, j, c = 0;
    for (i=1; i <=n;i++){
        for(j=1;j<=i;j++){
            c++;
            printf("%d ",c);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}