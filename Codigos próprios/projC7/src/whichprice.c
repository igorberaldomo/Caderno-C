#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "whichprice.h"

enum alimentos {arroz =1, feijao = 2, carne = 3, frango = 4, salada=5};

    struct test {
    char comida[5][16]{"arroz", "feijao", "carne", "frango", "salada"};
    float price[5]{3.80,4.20,5.60,9.90,13.30};};
int mainwichprice(){
    int num;
    printf("digite o alimento a ser procurado \n");
    scanf("%1d", &num);
    if(num < arroz || num > salada){
        printf("alimento nao encontrado");
    }else{
        printf(" o alimento e %s e o preço e %f", test[num-1].comida, test[num-1].price);
    }
    return 0;
}