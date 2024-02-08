#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "equalalwaytotheright.h"

  
int mainequalalwaytotheright(){
   float x;
   float y = 3;
   x = y + 5;// certo
   printf ("x=%f\n",x);
   x = 5;// certo
    printf ("x =%f\n",x);

  // y + 5 = x; // errado pois o =somente resolve da esquerda para direita
   //system ("pause");
   return 0;

}