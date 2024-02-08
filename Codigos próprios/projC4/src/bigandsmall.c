#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "bigandsmall.h"

int mainbigandsmall(){
    int b, s, c = 0;
    printf("esse progama pega todos os numeros e somente mostra o menor e o maior numero\n");
    for( int i = 1; i <= 100 && c <= 10; i++){
        c++;
        printf("digite o valor a  ser comparado: ");
        scanf("%d", &i);
        if(b > i){
            b = i;
        }
        else{
            b = b;
        }
            if(s < i){
            s = i;
            }
            else{
                s = s;
            }
    }
    printf("o menor numero é %d\n", s);
    printf("o maior numero é %d\n", b);
    system("pause");
    return 0;
}