#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "emprestimo.h"

int mainemprestimo(){
    float salario, prestação, resultado;
    printf("digite o valor do seu salario: ");
    scanf("%f",&salario);
    resultado = salario * 0.2;
    printf("digite o valor do sua prestação: ");
    scanf("%f",&prestação);
    if ( salario > resultado){
        printf(" emprestimo concedido\n");
    }
    else{
        printf(" emprestimo negado\n");
    }
    system("pause");
    return 0;

}
