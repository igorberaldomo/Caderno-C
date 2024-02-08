#include <stdio.h>
#include<stdlib.h>
#include "sequenciadeescape.h"

int mainsequenciadescape(){
    printf("'\a'");
    printf("'\b'"); // colocar '' entre "" permite ver os efeitos de cada uma das linstagens
    printf("'\n'");
    printf("'\r'");
    printf("'\v'");
    printf("'\t'");
    system ("pause");
    return 0;

}
