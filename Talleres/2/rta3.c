#include <stdio.h>
#include "getnum.h"

int
main(void)
{
    double num = getfloat("Ingrese un numero decimal\n");
    int parteEntera, digito, suma = 0;
    num = num>0 ? num : -num; /*Si es negativo, lo hago positivo*/
    parteEntera = (int) num;
    num = num - parteEntera; /*Me guardo la parte decimal en num*/

    while(num>0){
        digito = (int) (num * 10); /*Me quedo con la parte entera del decimal multiplicado por 10, es decir que me quedo con el primer decimal, y asi sucesivamente*/
        printf("suma %d\n", digito);
        suma += digito;
        num *= 10;
        parteEntera = (int) num;
        num -= parteEntera;
    }   
    printf("La suma es: %d\n", suma);
    return 0;
    /*El problema de este codigo es que si el decimal no es representable (es decir que no es la suma de potencias negativas de 2 o 10, no me acuerdo, la suma va a dar mal, ya que los decimales, segun la computadora son mas de los que realmente ingreso. Ejemplo: si pongo 2.14, me va a tomar el numero 2.140000674589734 y todos esos decimales del final tambien los va a sumar.)*/
}