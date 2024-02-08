#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "manipulatingX.h"
 const int z = 9;
 int mainmanipulatingX(){
    float x; //declara x e não atribui o valor
    float y = 3;// declara y e atribui o valor
    x = 5; // atribui valor de x
    printf("x = %f\n",x);
    x = z; // atribui uma constante a X mas não altera a constante
    printf("x = %f\n",x);
    x = y + 5;// atribui o resultado de umaexpressão matematica a x
    printf("x = %f\n",x);
    x = sqrt(9); // atribui o resultado de uma função a x
    printf ("x = %f\n",x);
    system ("pause");
    return 0;
 }