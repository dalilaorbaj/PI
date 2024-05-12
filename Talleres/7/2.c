//Como generar un arreglo dinamico en una funcion y recibirlo afuera

int *foo(int n){
    return malloc(n * sizeof(int));
}

int foo(int n, int * v){
    *v = //esto no sirve porque cuando salga de la funcion, va a apuntar a lo mismo que apuntaba antes
}

//lo que tendria que hacer es tener un parametro de tipo ** int, es decir que necesito algo que apunte a un puntero de int. porque yo quiero retornar una direccion
void foo(int n, int **v){ //Si tengo un tipo y quiero modificar y usar como argumento de entrada/salida tengo que agregarle un *
    *v = malloc(n*sizeof(int));
    
    //ahora lo relleno con ceros:
    for(int i=0 ; i<n ; i++){
        (*v)[i] = 0;
    }

}

//en el main tendria que hacer: int v[10]; foo(10, &v); (?) no entendi porque esto falla

