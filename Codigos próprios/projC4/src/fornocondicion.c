#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fornocondicion.h"

int mainfornocondicion(){
int a, b, c;
printf(" digite o valor de a: ");
scanf("%d",  &a);
printf(" digite o valor de b: ");
scanf("%d",  &b);
c = a;
for (a = c; ; c++){
    printf("%d\n",c);
}
system("pause");
return 0;

}