#include <stdio.h>
#include <stdlib.h>
#include "variavelglobal.h"
int x = 5; //variavelglobal
void incr(){
    x++;// acesso a variavel global
}
 int mainvariavelglobal(){
    printf ("x = %d\n",x);
    incr();
    printf ("x = %d\n",x);
    system("pause");
    return 0;
 }