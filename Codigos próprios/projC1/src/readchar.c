#include <stdio.h>
#include <stdlib.h>
#include "readchar.h"

int mainreadchar()
{

    char c = 'A';
    
    printf("\"%c\"\n", c);

    putchar('"');
    putchar(c);
    putchar('"');
    putchar('\n');

    // system("pause");
    return 0;
}