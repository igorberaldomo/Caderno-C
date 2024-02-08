#include <stdio.h>
#include<stdlib.h>
#include"singlechar.h"

int mainsinglechar(){
 char c;
 c = getchar();
 printf("caractere: %c\n", c);
 printf("codigo ASCCII: %d\n", c);
system ("pause");
return 0;
}