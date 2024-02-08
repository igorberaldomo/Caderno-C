#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"volumedocilindro.h"

int mainvolumedocirculo(){
 float A, a, pi;
 float raio;
 pi = 3.141592;
 printf("escreva qual é o raio do circulo ");
 scanf("%f", &raio);
 printf("escreva qual é a altura do cilindro");
  scanf("%f", &a);
 A = raio * raio * a * pi;
 printf("a aréa do circulo é %f\n", A);
 return 0;
}