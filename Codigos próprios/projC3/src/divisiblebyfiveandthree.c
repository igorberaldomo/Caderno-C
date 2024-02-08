#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "divisiblebyfiveandthree.h"


int maindivisiblebyfiveandthree(){
    int x;
    printf (" digite um numero: ");
    scanf("%d",&x);
        if (x / 5){ // como escrever o if sempre é seguido de ( a condição é escrita aqui na forma)...
        printf("o numero x é divisivel por 5\n");
        }else{
            printf("o numero x não é divisivel por 5\n");
            if (x / 3) // como escrever o if sempre é seguido de ( a condição é escrita aqui na forma)...
            printf("o numero x é divisivel por 3\n");
            else
            printf("o numero x é não divisivel por 3\n");
                if (x / 5 && x / 3) // como escrever o if sempre é seguido de ( a condição é escrita aqui na forma)...
                printf("o numero é divisivel por 3 e 5, não é valido\n");
                    }
    system ("pause");//... de uma variavel, seguida de uma condição,mair q (>)
    return 0; // menor q(<), iqual a (=); e um resultado esperad
}