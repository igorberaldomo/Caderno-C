#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "aandb.h"

int mainaandb(){
    
    float P,H;
    printf(" digite o seu peso: ");
    scanf("%f",&P);
    printf(" digite a sua altura: ");
    scanf("%f",&H);
   if ( 1.20>= H && 60.00>= P){
    printf(" você é categoria A\n");
    }else{
        if ( 1.20<= H && 1.70>= H && 60.00>= P)
        printf(" você é categoria B \n");
        else
        
            if ( 1.70<= H && 60.00 >= P)
            printf(" você é categoria C\n");
            else
                if ( 60.00>= P && 90.00>= P && 1.20>= H)
                printf("você é categoria D \n");
                else
                    if ( 60.00<= P && 90.00>= P && 1.20<= H && 1.70>= H)
                    printf("você é categoria E \n");
                    else
                        if ( 1.70<= H  && 60.00<= P && 90.00>= P)
                        printf(" você é categoria F \n");
                        else
                            if ( 1.20>= H &&  90.00<= P)
                            printf(" você é categoria G\n");
                            else
                                if (60.00<= P && 90.00>= P && 1.20<= H && 1.70>= H)
                                printf("você é categoria H \n");
                                else
                                    if ( 90.00<= P &&  1.70<= H)
                                    printf("você é categoria I \n");
                    }
    system ("pause");
    return 0;
}