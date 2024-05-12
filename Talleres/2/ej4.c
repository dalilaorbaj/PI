#include <stdio.h>
#include "getnum.h"

int
main(void)
{
    int suma = 0, c;
    /*Es mejor definir c como int ya que char no tiene default sobre si es signed or unsigned*/
    
    while ((c=getchar()) != '.' && c != ',') {
/*El problema con este codigo es que se asume que lo que va a ingresar el usuario es und decimal. La segunda soucion que es la que hicieron en el pizarron, es analogo a usar flags.
Segun la catedra suele ser mas correcto hacer las cosas en un solo ciclo */
    }
    while ((c=getchar()) != '\n' && c != EOF) {
        /*El getchar va adentro del while para ir pidiendo uno del buffer por cada iteracion del ciclo*/
        /*el != '\n' es para ver si llego al final de archivo */
        suma = suma + c - '0';


    }
    printf("La suma es: %d\n", suma);

    return 0;


/*Por otro lado, la solucion de la catedra tambien valida que todo lo ingresado es un numero o una coma. No admite letras. */

    }
