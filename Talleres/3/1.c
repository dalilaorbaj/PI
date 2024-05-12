#include <stdio.h>
#include <math.h>
#include "getnum.h"
#define TRUE 1;

int esPrimo(int num);

int main(void){
    int num = getint("Ingrese un entero");
    int primo = esPrimo(num);
    printf("");
}

int esPrimo(int num){
    if (num<0){
        num *= (-1);
    }
    int rta = TRUE;
    if(num<2){
        rta = !rta;
    }
    int div =2;
    while (div <= sqrt(num) && rta){
        if(num%div == 0){
            rta = !rta;
            div++;
        }
    return rta;
}
