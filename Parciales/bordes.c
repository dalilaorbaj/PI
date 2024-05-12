/*Dada una matriz cuadrada de dimensión M -donde M es una constante simbólica par
mayor a cero previamente definida (por ejemplo 2, 4, 6, etc.)-, se desea calcular la suma de
cada uno de sus bordes. Se considera como un borde a un contorno de la matriz.
El primer borde estaría conformado por la primer y última fila junto a la primer y
última columna, el segundo borde por la segunda y anteúltima fila junto a la segunda y
anteúltima columna, y continuando así hasta llegar al centro de la matriz, formado por un
cuadrado de 2x2.

Escribir la función bordes que reciba:
● una matriz mat de enteros de dimensión M (no se debe validar que M sea par positivo,
asumir que cumple con esa condición)
● un vector sumas de enteros no inicializado con al menos M/2 posiciones reservadas

La función debe dejar en sumas[i] la suma del borde i, para todo i en [0, M/2).
En el ejemplo anterior el vector sumas debe quedar con los valores { 20, 24, 12 },
ya que el primer borde está formado por 20 celdas con el valor 1, el segundo borde por 12
celdas con el valor 2 y el tercer borde (el centro) por 4 celdas con el valor 3.
*/

int cuenta(int m[][M], int fila){
    int suma=0;
    for(int i=fila;i<M-fila;i++){
        suma+=m[fila][i];
        suma+=m[M-1-fila][i];
    }

    for(int j=fila+1;j<M-1-fila;j++){
        suma+=m[j][fila];
        suma+=m[j][M-1-fila];
    }
    return suma;
}

void bordes(int m[][M], int suma[]){
    int i;
    for(i=0; i<M/2;i++){
        suma[i]=cuenta(m, i);
    }
}