#include <stdio.h>

int main(){
    int a = 5;
    int b = 6;
    int c = 7;

    /*OPCION 1*/
    int aux = a>b ? a:b;
    int max = aux>c ? aux:c;

    /*OPCION 2
    int max = a>b ? (a>c a:c) : (b>c b:c);
    */
    /*MORALEJA: Los operadores condicionales se pueden anidar*/
    printf("El mayor numero es: %d", max);
  
    return 0;
}
