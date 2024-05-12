/*Ejercicio para usar la funcion esPrimo. Esrcibir una funcion que genere los primeros n numeros primos. 
(No generar primos hasta N, sino que N numeros primos)*/
/* funcion que determine si un número es primo o no */
#include <stdio.h>
#include <math.h>
#include "../getnum.h"

int esPrimo(int num){
    for (int i=2 ; i<=(sqrt(num)) ; i++ ){
        if ((num%i)==0)
            return 0; /*no es primo*/
    }
    return 1; /*si llego hasta acá, es primo*/

}

void generarPrimos(int cantidad){
    int contador =0;
    for (int i=2; contador < cantidad ; i++){
        if (esPrimo(i)){ /*Como esPrimo devuelve 1 si es primo y cero si no es, esto va a ser un if(0) o if(1)*/
            printf("%d\n", i);
            contador++;
        }
    }
}