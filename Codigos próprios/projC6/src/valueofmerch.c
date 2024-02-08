#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "valueofmerch.h"

int mainvalueofmerch(){
    char merch[10];
    float i, price, result, discount;
    printf("Escreva o nome do produto: \n");
    scanf("%s", merch);
    setbuf(stdin, NULL);
    printf("Escreva o preço do produto: \n");
    scanf("%f", &price);
    result = price * 0.9;
    discount = price * 0.1;
    printf("mercadoria e %s, custa %f, tem o disconto %f e o total e %f",merch, price,discount,result);
    return 0;
}


