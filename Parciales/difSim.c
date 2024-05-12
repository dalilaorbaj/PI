/*La función deberá dejar en cada fila i de m3 la diferencia simétrica entre las filas i de m1 y de m2, 
con i ∈ [0, filas)*/
#include <stdio.h>
#define COLS 5
#define FILS 6
#define END -1
enum { MENOR, IGUAL, MAYOR }; 

void difSim(int m1[][COLS], int m2[][COLS], int m3[][COLS], int filas);
void fila(int v1[], int v2[], int v3[]);
int comparar(int n1, int n2);

int main(void) {
    int m1[FILS][COLS] = {
        {1, 2, 3, 4, -1}, 
        {3, 4, 5, -1},
        {10, 15, 20, -1},
        {-1},
        {-1},
        {5, 6, 7, -1}
    };
    int m2[FILS][COLS] = {
        {3, 4, 5, 6, -1}, 
        {3, 4, 5, -1},
        {10, 20, -1},
        {1, 2, 3, 4, -1},
        {-1},
        {1, 2, 7, -1}
    };
    int m3[FILS][COLS] = {0};
    difSim(m1, m2, m3, FILS);
    for(int i = 0; i < FILS; i++){
        for(int j = 0; j < COLS; j++)
            printf("%d ", m3[i][j]);
        putchar('\n');
    }

  return 0;
}


void difSim(int m1[][COLS], int m2[][COLS], int m3[][COLS], int filas){
    for(int i =0 ; i<filas ; i++){
        fila(m1[i], m2[i], m3[i]);
    }
    return ;
}

void fila(int v1[], int v2[], int v3[]){
    int i=0, j=0, k=0; //i para recorrer v1 y j para recorrer v2
    while( (v1[i]!=END) || (v2[j]!=END)){
        switch(comparar(v1[i], v2[j])){
            case MENOR:{
                v3[k++] = v1[i++];
                break;
            }
            case MAYOR:{
                v3[k++] = v2[j++];
                break;
            }
            case IGUAL:{
                i++;
                j++;
                break;
            }
        }
    }
       v3[k] = END; 
    return ;
}

int comparar(int n1, int n2){
    if(n1>n2 || n1==END){
        return MAYOR;
    }
    else if(n1<n2 || n2==END){
        return MENOR;
    }
    else{
        return IGUAL;
    }
}