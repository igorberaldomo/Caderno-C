#include<stdio.h>
#include<stdlib.h>
#include"tipesofreadingwithscanf.h"

int maintipesofreadingwithscanf(){
    int x,z;
    float y;
    scanf("%d",&x);// %d para valor inteiro
    scanf("%f",&y);// %f paravalor real
    scanf("%d %f",&x,&y);// valor inteiro(%d) e depois valor real(%f)
    scanf("%d %d",&x,&z); // dois valores inteiros
    scanf("%d %d",&x,&z); // dois valores inteiros com espaço entre eles
    system ("pause");
    return 0;
}