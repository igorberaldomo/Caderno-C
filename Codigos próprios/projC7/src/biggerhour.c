#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "biggerhour.h"

struct hour
{
    int h;
    int m;
    int s;
};
struct b
{
    int h;
    int m;
    int s;
};
int mainbiggerhour()
{
    int i;
    struct hour t[5];
    struct b b[1];
    for (i = 0; i < 5; i++)
    {
        printf("digite as horas nº %d: \n",i);
        setbuf(stdin, NULL);
        scanf("%d", &t[i].h);
        printf("digite os minutos nº %d: \n",i);
        setbuf(stdin, NULL);
        scanf("%d", &t[i].m);
        printf("digite os segundos nº %d: \n",i);
        setbuf(stdin, NULL);
        scanf("%d", &t[i].s);
    }
    for (i = 0; i < 5; i++)
    {
        if (b[0].h < t[i].h)
        {
            b[0].h = t[i].h;
            b[0].m = t[i].m;
            b[0].s = t[i].s;
        }
        if (b[0].h == t[i].h)
        {
            if (b[0].m < t[i].m)
            {
                b[0].h = t[i].h;
                b[0].m = t[i].m;
                b[0].s = t[i].s;
            }
            if (b[0].m == t[i].m)
            {
                if (b[0].s < t[i].m)
                {
                    b[0].h = t[i].h;
                    b[0].m = t[i].m;
                    b[0].s = t[i].s;
                }
                if (b[0].s == t[i].m)
                {
                    printf("erro os horarios sao iguais");
                }
                if (b[0].s > t[i].m)
                {
                    b[0].h = b[0].h;
                    b[0].m = b[0].m;
                    b[0].s = b[0].s;
                }
            }
        }
    }
    printf("a maior hora é %d:%d:%d", b[0].h, b[0].m, b[0].s);
    return 0;
}