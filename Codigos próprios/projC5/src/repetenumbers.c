#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "repetenumbers.h"

int mainrepetenumbers(){
    int array[10], array2[10], i;
    printf(" enter elements\n");
    for(i = 0 ; i <10;i++){
        printf(" digite o elementos numero %d: ", i);
        scanf("%d", &array[i]);}
        array[i] = array2[i];
    for (i = 0 ; i <10; i++){
            printf("element %d: ",array2[10]);
            scanf("%d", &array2[i]);}

    for (i = 0 ; i < 10; i++){
        if(array[i] == array2[i]){  
            i--;}
        else{
            if(array[i] != array2[i])
            printf("%d\n", array2[i]);
        }
    }
    return 0;
}