#include<stdio.h>
#include<stdlib.h>
#include"putchar.h"

int mainputchar(){
    char c = 'a';
    int x = 65;
    putchar(c); // escreve o caracter dentro de '' desde que seja letra
    putchar('\n'); //muda de linha
    putchar(x); //escreve o valor( nesse momento 65) como caractere
    putchar('\n'); //muda de linha
    system ("pause");
    return 0;
}