#include <stdio.h>
#include "getnum.h"

/*Este codigo no funciona, ver rta3.c*/
int
main(void)
{
    double numero = getfloat("Ingrese un numero decimal\n");   
if(numero<0){
    numero = numero * (-1);
}
int entero = numero;
double decimal = numero - entero;

int a = 0, suma = 0, auxiliar;

    do {
        decimal=decimal*10;
        auxiliar
        a = decimal%10;
        suma = suma + a;
    }while(a != 0);
printf("La suma es: %d\n", suma);
        return 0;
}