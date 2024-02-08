#include <stdlib.h>
#include <stdio.h>
#include "variavellocal.h"
// void func1(){
//     int x; // variavel local
// }
// void func2(){
//     int x;// variavel local
// }
int mainvariavellocal(){
    int x;
    scanf("%d",&x);
    if (x == 5){
        int y = 1;
        printf("%d\n",y);
    }
    system ("pause");
    return 0;
}