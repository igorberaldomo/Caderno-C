#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "4dimensionalarray.h"

int main4dimensionalaray(){
    int vet[5]; // declara array de int com 1 dimensão
    float mat[5][5]; // declara array de float com 2 dimensões
    double cub[5][5][5];// declara array de double com 3 dimensões
    int X [5][5][5][5];// declara array de int com 4 dimensões
    printf("%d %d %d %d", vet,mat ,cub ,X);
    system("pause");
}