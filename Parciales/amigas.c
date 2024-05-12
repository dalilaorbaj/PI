#include <stdio.h>
#define N 5
enum { NINGUNA=0, PRIMERA, SEGUNDA };


//abandono, me esta quemando mucho

int amigismo(const int m1[N][N], const int m2[N][N]){
    if(matricesAmigas(m1, m2))
        return PRIMERA;
    else if(matricesAmigas(m2, m1))
        return SEGUNDA;
    else
        return NINGUNA;
}

int matricesAmigas(const int m1[N][N], const int m2[N][N]){
    int amigas=1;
    for(int i=0 ; i<N && amigas ; i++){
        amigas = filaAmiga(m1[i], m2);
    }
    return amigas;
}

int filasAmigas(const int fila[i], const int m2[N][N]){
    int amiga =0;
    //agregar condicion de corte prematura
    for(int i=0 ; i<N ; i++){ //i para recorrer filas de m2
        for(int j=0 ; j<N ; j++){ //j para recorrer elementos de cada fila de m2
            for(int k=0 ; k<N ; k++){ //k para recorrer los eltos de LA FILA

            }
        }
    }
}
