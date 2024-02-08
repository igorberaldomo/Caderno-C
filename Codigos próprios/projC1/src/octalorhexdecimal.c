#include<stdio.h>
#include<stdlib.h>
#include"octalorhexdecimal.h"

int mainoctalorhexdecimal(){
    int a = 125;// valor em decimal
    int b = 0435;// valor em octal( zero "0" na frente no numero) equivale a 285
    int c = 0x1FA;// valor em hexadecimal ("0x ou 0x" na frente do numero e letra) equivale a 506
    // o hexa decimal vai de 0 a 9 com os numeros e as letras A(10), B(11), C(12), D(13), E(14), F15
printf("valor de a:%d\n",a);
printf("valor de b:%d\n",b);
printf("valor de c:%d\n",c);
system("pause");
return 0;

}