#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "biggerprime.h"

int proximo_primo(int x)
{
    int achou = 0;
    int o = x;
    while (!achou)// enquanto achou não é 1
    {
        int i;
        o = o + 1;// inicia o 'o' com +1 para compensar que a contagem 'i' vai começar do numero 2
        for (i = 2; i < o; i++)
            if (o % i == 0)// se o o dividido por i for inteiro significa que e fator
                break;
        if (achou == 0 && i == o)// se o 'achou' for 0 o que ele nao foi mechido e o 'i' e igual a 'o' significa que o progama 
            achou = 1;// chegou no final
    }
    return o;
}
int maior_fator_primo(int x)
{
    int mul_primos = 1;
    int o = x;
    int primo_atu = 2;
    while (mul_primos != x)// se o valor foi diferente de x
    {
        int resto = o % primo_atu;// cheque se for inteiro
        if (resto == 0)// s inteiro multiplique o valor pelo primo
        {
            mul_primos = mul_primos * primo_atu;
            o = o / primo_atu;
            printf(" %d %d %d %d \n", primo_atu, o, resto, mul_primos);
        }
        else// se não foi inteiro aplique o procedimento acima para achar o proximo
            primo_atu = proximo_primo(primo_atu);
    }
    return primo_atu;
}

int mainbiggerprime(void)
{
    int x;
    printf(" digite o numero qque voce quer achar o mair fator primo");
    scanf("%d", &x);
    printf(" maior fator primo de %d é %d.\n", x, maior_fator_primo(x));
    return 0;
}