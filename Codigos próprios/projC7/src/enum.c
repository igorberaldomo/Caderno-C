#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "enum.h"

enum semana {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

int mainenum(){
    enum semana s1, s2,s3;
    s1 = Segunda;
    s2 = Terca;
    s3 = s1 +s2;
    printf ("domingo = %d\n", Domingo);
    printf(" s1 = %d\n",s1);
    printf(" s2 = %d\n",s2);
    printf(" s3 = %d\n",s3);
    return 0;

}
