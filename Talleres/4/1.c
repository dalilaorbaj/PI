#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "random.h"
#define MIN 1
#define MAX 256
#define PISO 'A'
#define TECHO 'Z'

int contarMinusculas(unsigned int n, unsigned int mayus); 

int main(){
    randomize(); //(! Llamo a randomize para setear la semilla
    unsigned int n = randInt(MIN, MAX);
    unsigned int mayus = randInt(PISO, TECHO);
    int minus = contarMinusculas(n, mayus);
    printf("La letra %c aparece %d veces\n", mayus, minus);
}

int contarMinusculas(unsigned int n, unsigned int mayus){
    int c, contador=0, caracteres=0;
    while((c=getchar()) != '\n' && caracteres<n){
        if(toupper(c) == mayus)
            contador++;
        caracteres++;
    }
    return contador;
}