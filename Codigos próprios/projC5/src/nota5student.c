#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "nota5student.h"

int mainnota5student(){
    float n1, n2, n3 ,n4 ,n5;
    printf("digite a nota de 5 estudantes: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    scanf("%f", &n5);
    float media = (n1 + n2 + n3 + n4 + n5)/5.0;
    if (n1> media) printf("nota %f\n", n1);
    if (n2> media) printf("nota %f\n", n2);
    if (n3> media) printf("nota %f\n", n3);
    if (n4> media) printf("nota %f\n", n4);
    if (n5> media) printf("nota %f\n", n5);
    system("pause"); return 0;



}