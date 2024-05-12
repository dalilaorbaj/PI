/*Escribir la función recursiva esPotenciaDe3 que recibe un número y retorna 1 si el mismo es un valor mayor que 
cero y potencia exacta de 3 (por ejemplo: 9, 27, etc.) y 0 en caso contrario*/

int esPotenciaDe3(int n){
    if(n<=0 || n%3 != 0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return 1 * esPotenciaDe3(n/3);
}