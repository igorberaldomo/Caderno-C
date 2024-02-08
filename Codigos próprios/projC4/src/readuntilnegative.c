#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "readuntilnegative.h"

int mainreaduntilnegative(){
    int b, s, q, c = 0;
    printf("esse progama pega todos os numeros e somente mostra o menor e o maior numero\n");
    for( int i = 1; i <= 100 && c <= 10; i++){
        c++;
        printf("digite o valor a  ser comparado: ");
        scanf("%d", &i);
        q = i;
        if(b > i){
            b = b;
        }
        else{
            b = i;
        }
            if(s < i){
            s = s;
            }
               else{
            s = i;
            }
             if ( q < 0){
            printf("negativo, desligando o progama!");
            goto final;
        }
    }
    final:
    printf("o menor numero é %d\n", s);
    printf("o maior numero é %d\n", b);
    system("pause");
    return 0;
}