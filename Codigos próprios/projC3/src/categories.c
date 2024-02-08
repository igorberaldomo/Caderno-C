#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "categories.h"

int maincategories(){
    int age;
    printf("digite sua idade: ");
    scanf("%d", &age);
    if ( 5>=age && age <=7){
    printf(" a categoria de idade é infantil A \n");
    }else{
         if ( 8>=age && age <=10)
        printf(" a categoria de idade é  infantil B \n");
        else
        
             if ( 11>=age && age <=13)
            printf(" a categoria de idade é Juvenil A \n");
            else
                 if ( 14>=age && age <=17)
                printf(" a categoria de idade é Juvenil B \n");
                else
                    if(age >= 18)
                    printf(" a categoria de idade é Senior \n");
                    }
            
    system("pause");
    return 0;
    }