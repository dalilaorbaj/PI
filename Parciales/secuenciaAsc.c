#include <stdio.h>

/*Escribir una función secuenciaAsc que reciba un vector de enteros (sin orden) y su dimensión y almacene en 
dos parámetros de salida:
●	comienzo: Dónde comienza la secuencia de números ordenados en forma ascendente (cada elemento debe ser mayor al
anterior) de mayor longitud
●	longitud: Longitud de esa secuencia
En caso de haber más de una secuencia con la mayor longitud debe almacenar en comienzo donde comienza la primera de ellas.
*/

void secuenciaAsc(const int vec[], int dim, int * comienzo, int * longitud);





int main(void){
    int vec[] = {1, 1, 3, 4, 4, 7, 10, 9, 11};
    int dim = sizeof(vec)/sizeof(vec[0]);
    int comienzo, longitud=1;
    secuenciaAsc(vec, dim, &comienzo, &longitud);
    printf("Comienzo: %d\nLongitud: %d\n", comienzo, longitud);
    return 0;
}


void
secuenciaAsc(const int v[], size_t dim, int * comienzo, int * longitud) {
 
    for(int i = 1, comienzoAux = 0, longitudAux = 1; i < dim; i++) {
        if(v[i-1] < v[i]) {
            longitudAux++;
        } else {
            comienzoAux = i;
            longitudAux = 1;
        }
        if(longitudAux > *longitud) {
            *comienzo = comienzoAux;
            *longitud = longitudAux;
        }
    }
}

void secuenciaAsc(const int vec[], int dim, int * comienzo, int * longitud){
    int in=0;
    *comienzo = 0
    *longitud = dim>0; 

    for(int i=1 ; i<dim ; i++){
        if(vec[i] > vec[i-1]){
            if(in){
                *longitud++;
                printf("entro al if\n");
                printf("%d\n", *longitud);
            }
            else{
                in=1;
                *comienzo = i;
            }
        }
        else{
            in=0;
        }
    }
} 