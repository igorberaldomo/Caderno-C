#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "youngestoldest.h"

struct age{
    char name[10];
    int idade;
};
struct old{
    char name[10];
    int idade;
};
struct young{
    char name[10];
    int idade;
};

int mainyoungestoldest(){
    int i, menor , maior;
    struct age a[5];
    struct young y[1];
    struct old o[1];
    o[0].idade = 0;
    y[0].idade = 100;
    for (i=0;i< 5;i++){
    printf("digite o nome cadastro nº %d: \n", i);
    setbuf(stdin,NULL);
    gets(a[i].name);
    printf("digite a idade: \n");
    setbuf(stdin,NULL);
    scanf("%d", &a[i].idade);
    if(o[0].idade < a[i].idade){
        o[0].idade = a[i].idade;
        maior = i;
    }
    if (y[0].idade > a[i].idade){
        y[0].idade = a[i].idade;
        menor = i;
    }
    }
    printf(" o mais velho e %s com a idade %i\n", a[maior].name, a[maior].idade);
    printf(" o mais novo e %s com a idade %i\n", a[menor].name, a[menor].idade);
    return 0;
}