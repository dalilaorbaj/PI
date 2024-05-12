/*Implementar una función que reciba un arreglo de nombres de alumnos, el arreglo de notas y retorne la lista de 
aprobados. El prototipo es:
int obtenerAprobados(char * arrNombres[], int tam, char * aprobados[], int notas[]);
● ¿Qué retorna la función?
● ¿Se pueden modificar los nombres en el arreglo destino?*/
#define NOTA_APROBADA 4


int obtenerAprobados(char * arrNombres[], int tam, char * aprobados[], int notas[]){
    int k=0; //para recorrer aprobados
    for(int i=0 ; i<tam ; i++){
        if(notas[i] >= NOTA_APROBADA ){
            aprobados[k++] = arrNombres[i];
            //(??) aprobados[i][0] estaria bien acceder de esta forma aunque este deifnido como vector de punteros??
        }
    }
    return k;
}

//Ahora lo mismo pero que tambien devuelva una copia: 
// Habria que ir haciendo de a BLOQUES pero en este caso se puede usar strlen para el malloc porque son strings cortos
int obtenerAprobados(char * arrNombres[], int tam, char * aprobados[], int notas[]){
    // (!) Si modifico aprobados, unicamente cambio su valor dentro de la funcion
    int k=0; //para recorrer aprobados
    for(int i=0 ; i<tam ; i++){
        if(notas[i] >= NOTA_APROBADA ){
            aprobados[k] = malloc(strlen(arrNombres[i])+1);
            if(aprobados[k] == NULL){
                return NULL;
            }else{
                strcpy(aprobados[k], arrNombres[i]);
                *aprobados[k] = toupper(*aprobados[k]);
            }
        }
    }
    return k;
}