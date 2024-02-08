#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "duplicateelementsarray.h"

int mainduplicateelementsarray(){
    int array[10], i, j ,flag;
    flag = 0;
    printf(" enter elements\n");
    for( i = 0; i < 10;i++){
        printf("element %d: ",i);
        scanf("%d", &array[i]);
    }
    for( i = 0; j < 10;j++){
        for( j = i+1; i < 10;i++){
            if(array[i] == array[j]){
                printf ("%d\n", flag);
                flag++;
            }
        }
    }
    printf("tem %d, valores repetidos", flag);
    return 0;
}