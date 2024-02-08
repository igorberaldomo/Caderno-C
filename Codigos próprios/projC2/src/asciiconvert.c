#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "asciiconvert.h"

int mainasciiconvert(){
    int i;

    char a [27];
    char b [27];

    for (i = 0; i < 26; i++){
        a[i] = 'A' + i;
        b[i] = 'a' + i;
    }

    a[i] = '\0';
    b[i] = '\0';
    printf("%s\n", a);
    printf("%s\n", b);
    char c;
    for (c ='A'; c <='z'; i++){
        printf ("%c%c",c ,(c+32));
    }
    printf("\n");

    return 0;
}