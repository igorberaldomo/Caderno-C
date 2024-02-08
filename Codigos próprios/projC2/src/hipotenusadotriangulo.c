#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "hipotenusadotriangulo.h"

int mainhipotenusadotriangulo(){
 float a,b,h;
 printf("escreva qual é o tamanho do lado a ");
 scanf("%f", &a);
printf("escreva qual é o tamanho do lado b");
 scanf("%f", &b);
 h= sqrt((a * a) + (b * b));
 printf("a hipotenusa do triangulo é %f\n", h);
return 0;
} 