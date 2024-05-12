/*Escribir una función que reciba una matriz cuadrada de dimensión N (N es una constante previamente definida) y 
retorne 1 si la misma cumple con las siguientes condiciones:
1) Contiene todos los números de 1 a N * N inclusive
2) En cada fila contiene números consecutivos, no necesariamente ordenados
*/
#include <stdio.h>
#define N 4

int consecutivos(int matriz[][N]);
int fila(int vec[], int fil);


int
main(void){
    int m[][4] = {{1, 2, 3, 4}, {5, 8, 7, 6}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    printf("%d\n", consecutivos(m));
    return 0;
}


int consecutivos(int matriz[][N]){
    int ok=1;
    for(int i=0; i<N && ok; i++){
        ok = fila(matriz[i], i); 
    }
    return ok;
}


int fila(int vec[], int fil){ //agregar condicion de corte con variable encontro
    int encontro = 1; 
    for(int i=(fil*N)+1 ; i<= (fil+1)*N && encontro  ; i++){
        encontro=0;
        for(int k=0 ; k<N && !encontro; k++){
            if(i == vec[k]){
                encontro=1;
            }
        }
    }
    return encontro;
}
