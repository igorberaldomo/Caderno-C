#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "nomultipleofsevenarray.h"

int mainnomultipleofsevenarray()
{
    int i, n = 0;// "i" é o valor da cedula e "n" é a posição
    int array[100];
    while (n < 100)
    {
        if (i % 7 != 0) // detecta os numeros NÃO multiplos de 7 
        {
            array[n] = i; // se esses numeros foram encontrados eles devem ser armazenados
            n++;
        }
        i++; // independente de for ou não numeros multiplos de 7 eles aumenta um de forma a não travar o progama
    }
    for (n = 0; n < 100; n++) // o n aqui não tem mais nada a ver com o primeiro n acima com excessão do numero total
        printf("%d eh %d \n", n, array[n]);
    return 0;
}