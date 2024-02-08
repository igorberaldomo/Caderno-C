#include <stdlib.h>
#include <stdio.h>
#include "basicgetchar.h"

int mainbasicgetchar()
{
    char c;
    c = getchar();
    printf(" caractere: %c\n", c);
    printf(" codigo ASCII: %d\n", c);
    system("pause");
    return 0;
}
