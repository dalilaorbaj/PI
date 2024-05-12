/*Escribir la función depura  que reciba un vector de unsigned char y su dimensión (no es un string null terminated).
El mismo contiene valores repetidos y no está ordenado. La función debe dejar en el vector únicamente valores no 
repetidos y ordenados en forma ascendente, también debe retornar la nueva dimensión del vector.*/
//Como es un vector de unsigned char y por ende tiene como maximo 256 eltos diferentes posibles, voy a usar un vector de apariciones, es decir rec


int depura(unsigned char v[], int dim){
    unsigned char apariciones[dim] = {0};
    int nuevaDim=0, aux;
    for(int i=0 ; i<dim ; i++){
        aux=?????
        if(apariciones[aux] == 0){
            apariciones[aux]++;
            
        }
        else{

        }
    }
    return nuevaDim;
}

int chequearFil(const char m[]){
   char v[DIM] = {0};  // vector auxiliar para marcar si un dígito ya estaba
   int aux;
       aux = m[i]-1;
       if(v[aux] == 0){
           v[aux]++;
       }else{
            ok = 0; 
       }
   }
