/*Escribir la función checkBoard que recibe como único parámetro una matriz cuadrada de dimensión DIM 
(es una constante simbólica previamente definida) y retorne 1 cuando la matriz representa un tablero válido de un 
juego al estilo ajedrez o dama. 
Un tablero es válido cuando cumple ambas condiciones mencionadas a continuación:
●	No existen dos posiciones adyacentes (tanto en forma horizontal o vertical) del mismo color
●	Sólo se utilizaron dos colores en todo el tablero

Los posibles colores están dados por el enum colors. Se garantiza que en la matriz estarán únicamente los valores 
del enum colors, no es necesario validarlo.

Se descuentan puntos si se chequean adyacencias de mas, por lo que hay que determinar dos direcciones, una 
horizontal y otra vertical para chequear las adyacencias. Como por ejemplo, unicamente chequar para derecha y abajo*/
#include <stdio.h>
#include <assert.h>
#define DIM 4


typedef enum colors {black=0, white, blue, red, purple, orange};

int checkBoard(const unsigned char matriz[][DIM]);
int respetaColor(int c1, int c2, int pos);

int 
main(void) {
   unsigned char t[DIM][DIM] = { 
           {black, white, black, white},
           {white, black, white, black},
           {black, white, black, white},
           {white, black, white, black}};
   // Es un tablero válido
   assert(checkBoard(t) == 1);

   unsigned char t2[DIM][DIM] = { 
           {black, white, black, white},
           {white, black, white, black},
           {black, white, black, white},
           {white, black, white, blue}};
   // No es válido pues se usaron más de dos colores
   assert(checkBoard(t2) == 0); 

   unsigned char t3[DIM][DIM] = { 
           {black, white, black, white},
           {white, black, white, black},
           {white, black, white, black}};
   // No es válido pues hay dos posiciones adyacentes del mismo color
   assert(checkBoard(t3) == 0);

   return 0;
}

int checkBoard(const unsigned char matriz[][DIM]){
    int ok=1, c1=matriz[0][0], c2=matriz[0][1];
    int pos, der, abj;
    for(int i=0 ; i<DIM && ok ; i++){
        for(int j=0 ; j<DIM && ok; j++){
            pos=matriz[i][j];
            abj=matriz[i+1][j];
            der=matriz[i][j+1];
            ok=respetaColor(pos, c1, c2);
            if(i==DIM-1 && j==DIM-1){ //Si estoy en el ultimo casillero (abajo a la derecha)
                return ok;
            }
            else if(j==DIM-1 && ok){ //Si estoy en el borde de la derecha
                ok = (pos != abj);
            }
            else if(i==DIM-1 && ok){ //Si estoy en el borde de la izquierda
                ok = (pos != der);
            }
            else if(ok){ //si no estoy en los bordes de abajo ni de la derecha
                ok = (pos != abj) && (pos != der);
            }        
        }
    }
    return ok;
}

int respetaColor(int c1, int c2, int pos){
    return (pos == c1 && pos == c2);
}