#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "whichmonthis.h"

int mainwhichmonthis(){
    int m;
    printf("digite seu numero: ");
    scanf("%d", &m);
    if ( m==1){
    printf("Janeiro \n");
    }else{
         if ( m==2)
        printf(" Fevereiro\n");
        else
            if ( m==3)
            printf(" Março\n");
            else
                 if ( m==4)
                printf("Abril\n");
                else
                    if(m==5)
                    printf(" Maio\n");
                    else
                        if ( m==6)
                        printf("Junho \n");
                         else
                            if ( m==7)
                            printf(" Julho\n");
                            else
                                if ( m==8)
                                printf(" Agosto\n");
                                else
                                    if ( m==9)
                                    printf("Setembro\n");
                                    else
                                        if(m==10)
                                        printf(" Outubro\n");
                                        else
                                            if(m==11)
                                            printf(" Novembro\n");
                                            else
                                                if(m==12)
                                                printf(" Dezembro\n");
                                                else
                                                printf("não tem mê maior que 12");
                                                    }

    system("pause");
     return 0;
    }