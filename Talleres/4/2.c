#include <stdio.h>
#include <ctype.h>
#include "random.h"

void mezclar(unsigned int arreglo[], int dim);

int main(void){
    int i, j, aux;

    return 0;
}

void mezclar(unsigned int arreglo[], int dim){
	randomize();
    int aux, i, j;
	for (int i = 0; i < dim; i++) {
		j = randInt(0, dim-1);
		aux = arreglo[i];
		arreglo[i] = arreglo[j];
		arreglo[j] = aux;
	}
}