/*Escribir una función verifica que recibe como único parámetro una "matriz" de enteros de NxN, donde N es una 
constante previamente definida, de tipo entero y múltiplo de 3, por ejemplo 3, 6, 9, etc.
La función debe retornar 1 si se cumplen todas las siguientes condiciones:
●	Todos los elementos de la matriz están entre 1 y 3*N inclusive
●	Cada submatriz de 3x3 debe tener elementos sin repetir
●	Al sumar los elementos de cada submatriz de 3x3 se obtiene el mismo resultado
Las submatrices son similares a las del juego de Sudoku, comienzan en las posiciones (0,0), (0,3), (3,0), (3,3), 
(0,6), etc.
*/
#include <stdio.h>
#define N 6

int verificaMatriz (int matriz[][N]);


int main(void) {
  int mat[N][N] = {
        {10,3	,2	,3	,8	,7}, 
        {12	,8,	6,	6,	2,	4},
        {4,	7,	5,	5,	12,	10},        
        {2,	12,	6,	10,	4	,5}, 
        {5	,10	,3	,7	,2	,9},
        {8	,4	,7	,3	,6,	11}
        };


    printf("%d\n", verificaMatriz(mat));
  return 0;
}

int verificaMatriz (int matriz[][N]){
    int sub, anterior=0;
    for(int i=0 ; i<N ; i+=3){
        for(int j=0 ; j<N ; j+=3){
            sub = submatriz(matriz, i, j);
            printf("%d\n", sub);
            if(i==0 && j==0){
                anterior = sub;
            }
            if(sub != anterior || sub ==0){
                return 0;
            }
            anterior = sub;
        }   
    }
    return 1;
}

// Cada submatriz de 3x3 debe tener elementos sin repetir

submatriz(int matriz[][N], int fila, int col){
    int vector[9], k=0, suma=0;
    for(int i=fila ; i<fila+3 ; i++){ 
        for(int j=col ; j<col+3 ; j++){

            if(matriz[i][j] <1 || matriz[i][j] > 3*N){
                printf("entro al primer if\n");

                return 0;
            }

            vector[k++] = matriz[i][j];

            for(int h=0 ; h<k-1 ; h++){
                if(vector[h] == matriz[i][j]){
                    printf("k: %d\n", k);
                    printf("h: %d\n", h);
                    printf("vector[h]: %d\n", vector[h]);
                    printf("matriz[i][j]: %d\n", matriz[i][j]);
                    return 0;
                }
            }
            suma += matriz[i][j];

        }
    }
    return suma;
}