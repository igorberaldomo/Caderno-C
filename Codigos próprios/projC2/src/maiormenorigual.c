#include <stdio.h>
#include <stdlib.h>
#include "maiormenorigual.h"

int mainmaiormenorigual(){
    int x = 5;
    int y = 3;
    printf("resultado %d\n",x > 4); // verdadeiro (1)
    printf("resultado %d\n",x == 4);// falso (0)
    printf("resultado %d\n",x != y);// verdadeiro (1)
    printf("resultado %d\n",x != y+2);// falso (0)
    system ("pause");
    return 0;
}
    
