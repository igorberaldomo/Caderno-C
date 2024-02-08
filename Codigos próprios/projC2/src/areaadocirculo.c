#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"areadocirculo.h"

int mainareadocirculo(){
 float A, pi;
 float raio;
 pi = 3.141592;
 printf("escreva qual é o raio do circulo ");
 scanf("%f", &raio);
 A = raio * raio * pi;
 printf("a aréa do circulo é %f\n", A);
 return 0;
}