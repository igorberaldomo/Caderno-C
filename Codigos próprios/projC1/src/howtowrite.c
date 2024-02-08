#include <stdio.h>
#include<stdlib.h>
#include"howtowrite.h"
int mainhowtowrite(){
    // definir a integral
    int x = 10;
    //imprima o valor de x
    printf("%d\n",x);
    // defina o float
    float y = 5.0;
    //escreva o valor de x (inteiros) imediatamente depois o valor de y(real)
    printf("%d%f\n",x,y);
    // escreva os valores de x e y com espaço
    printf("%d %f\n",x,y);
    system("pause");
    return 0;
}