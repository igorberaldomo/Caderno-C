#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "howmanybignumber.h"

int mainhowmanybignumber(){
    int n = 0;// variavel que vai deverminar o numero de numeros que seram entrados
    int o, p;// variaveis que representam o valor numérico elas seram comparadas de forma a determinar o maior numero
    int q; // variavel que representa a quantidade de vezes um único numero (maior) foi digitado
    printf("a quantidade de entradas");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("valor %d: ", i +1);
        scanf("%d", &o);
        if ( i == 0) // a primeira variavel normalmente seria 0 então qualquer numero colocado positivo vai ser o maior
        {
            p = o;
            q = 1;// coloque o numero de vezes que um numero apareceu como 1 por que é o primeiro numero digitado
        }
        else
        {
            if(o > p)// se o valor digitado for maior do que o anterior substitua
            {
            p = o;
            q = 1;// já que o numero anterior é maior ele vai obrigatoriamente ser o primeiro logo reset o numero como 1
            }
            else if ( o == p) // se o numero for repitido aumente a quantidade de vezes que ele foi contado
                q++;
        }
    }
    printf(" o maior número foi %d e foi lido %d vezes.\n", p, q);
    return 0;
}