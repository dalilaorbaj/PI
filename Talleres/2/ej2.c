#include <stdio.h>
#include "getnum.h"

int
main(void)
{
    int numero = getint("Ingrese un numero entero\n");   
if(numero<0){
    numero = numero * (-1);
}
int a = 0, suma = 0;
    do {
        a = numero%10;
        suma = suma + a;
        numero /= 10;
    }while(a != 0);
printf("La suma es: %d\n", suma);
        return 0;
}

/*En este caso estoy perdiendo la variable numero, que a veces me podria llegar a servir. Puedo usar una variable auxiliar para no perder la info de la variable numero */
