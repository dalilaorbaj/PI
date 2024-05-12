/*Si no tengo la dimension sino que tiene una marca de final, la solucion es ir de a poco*/
#define FINAL -1

void mezclar(int v[]){
    int aux, i=0, j;
    while(v[i] !=FINAL){
        j=randInt(0, i);
        aux=v[j];
        v[j] = v[i];
        v[i]=aux;
        i++;
    }
}