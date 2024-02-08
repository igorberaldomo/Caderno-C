#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fornoincrement.h"

int mainfornoincrement(){
int a, b, c;
printf(" digite o valor de a: ");
scanf("%d",  &a);
printf(" digite o valor de b: ");
scanf("%d",  &b);
c = a;
for (a = c;c <=b; ){
    printf("%d\n",c);
    c++;
}
system("pause");
return 0;

}