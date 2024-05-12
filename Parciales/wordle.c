/*Implementar una función wordle que resuelva un tablero del juego Wordle (también conocido como palabra del día). 
La función recibe:
●	Una palabra secreta de COLS caracteres (no es necesario validarlo)
●	Una matriz de caracteres de tamaño FILS x COLS donde cada fila es un intento del usuario para resolver la 
palabra secreta
●	La cantidad de intentos del usuario (un entero menor o igual a FILS)

La función debe dejar en otra matriz una marca V, A o G para cada letra de cada intento del usuario donde:
●	V: VERDE significa que la letra está en la palabra y en la posición CORRECTA.
●	A: AMARILLO significa que la letra está presente en la palabra pero en la posición INCORRECTA.
●	G: GRIS significa que la letra NO está presente en la palabra.
	hasta que se marque el primer intento correcto (todas las letras verdes) o se hayan analizado todos los intentos.
	La función debe retornar un entero con el número del primer intento correcto (todas las letras verdes) o -1 
    si ningún intento es correcto.
Notar que tanto la palabra oculta como las palabras de los intentos pueden contener letras repetidas. En ese caso, 
las pistas son independientes para cada letra y tienen prioridad: verde tiene mayor prioridad al amarillo.
*/

//Lo deje sin terminar
/*
#include <stdio.h>
#define COLS 
#define FILS 
enum { VERDE, AMARILLO, ROJO };


int wordle(char palabra[COLS], char matriz[FILS][COLS], int intentos, char resultado[FILS][COLS]){
    int win=0;
    for(int i=0 ; i<FILS ; i++){
        for(int j=0 ; j<COLS ; j++){
            for(int k=0 ; k<COLS ; k++){
                switch(comparar(matriz[i][j], j, palabra[k], k)){
                    case VERDE:{
                        
                    }
                }
            }
        }
    }

}


int comparar(char c1, int pos1, char c2, int pos2, int resultado[FILS][COLS]){
    if(c1==c2 && pos1==pos2){
        resultado[][] = 'V';
    }
    else if(c1==c2){
        return AMARILLO;
    }
    else{
        return ROJO;
    }
}
*/

#define LETTERS 255

int wordle(const char * secretWord, const char inputMatrix[][COLS], int inputDim, char outputMatrix[][COLS]) {
    int i, j, greenCount;
    char secretWordLetters[LETTERS] = {0};
    for(int x = 0; secretWord[x]; x++) //se recorre el for hasta END
        secretWordLetters[secretWord[x]] = 1; //se guarda la palabra caractera a caracter en el vector
    for(i = 0; i < inputDim && greenCount != COLS; i++) { //recorro filas
        for(j = 0, greenCount = 0; j < COLS; j++) { //recorro columnas
            char inputLetter = inputMatrix[i][j];
            if(secretWord[j] == inputLetter) {
                outputMatrix[i][j] = GREEN;
                greenCount++;
            } else if(secretWordLetters[inputLetter] == 1) { //no entendi que hace esta linea
                outputMatrix[i][j] = YELLOW;
            } else {
                outputMatrix[i][j] = RED;
            }
        }
    }
    return greenCount == COLS ? i : -1;
}
