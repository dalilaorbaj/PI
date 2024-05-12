#include <stdio.h>

#define HOLA 10

int main(){
    int num = 14;
    int ascii = (num >= 0 && num <= 15) ? ((num >= 10) ? num+'A'-HOLA : num+'0') : num ;
    printf("%c\n", ascii);

    /*Moralejas: */
}