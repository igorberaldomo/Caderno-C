#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "desviopadrao.h"

int maindesviopadrao(){
    int n =10;
    int vetor[n];
    int d ,media,desvio, variancia,i;
    for(i = 0; i < n; i++)
    {
    printf(" digite os elementos do vetor: ");
    scanf("%d", &vetor[i]);
    }
    media = (vetor[1]+vetor[2]+vetor[3]+vetor[4]+vetor[5]+vetor[6]+vetor[7]+vetor[8]+vetor[9]+vetor[0])/n;
    for (i = 0; i < n; i++)
        {
        desvio = (vetor[i] - media);
        printf("%d", desvio);
        variancia = variancia + ((desvio*desvio)/n);}
        d = sqrt(variancia);
        printf ("%d", d);
        
        return 0;
}