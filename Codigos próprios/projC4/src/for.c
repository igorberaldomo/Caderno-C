#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "for.h"

int mainfor(){
int a, b, c;
printf(" digite o valor de a: ");
scanf("%d",  &a);
printf(" digite o valor de b: ");
scanf("%d",  &b);
c = a;
for (a = c; c<= b; c++){
    printf("%d\n",c);
}
system("pause");
return 0;

}