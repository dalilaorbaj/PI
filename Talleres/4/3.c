//dondeEsta, dado un arreglo ordenado crecientemente de enteros que puede tener repetidos.
#include <stdio.h>
#define DIM 10
#define NUM 5

int dondeEsta(const int vector[], int x, int dim, int rta[]);

int main(void){
    int v[DIM]={0, 1, 2, 3, 4, 5, 5, 5, 5, 6};
    int posiciones[DIM];
    int dim = dondeEsta(v, NUM, DIM, posiciones);
    printf("Aparece %d veces\n", dim);
    for(int k=0; k<dim; k++){
        printf("%d\n", posiciones[k]);
    }
    return 0;
}


int dondeEsta(const int vector[], int x, int dim, int rta[]){
    int j=0, dimension=0;
    for(int i=0; i<dim && vector[i]<=x ; i++){
        if(vector[i] == x){
            rta[j++] = i;
            dimension++;
        }
    }
    return dimension;
}

/*Otra opcion: hacer dos for para ni siquiera tener que evaluar (if) si vector[i]<x y hago otro for para cuando vector[i]==x*/
