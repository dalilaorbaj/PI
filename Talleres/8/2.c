//En este caso el caso base es preguntar si los dos son el conjunto vacio 
int igualesRet(int * v1, int * v2){
    if(*v1==-1 && *v2==-1){
        return 1;
    }
    return (*v1 == *v2) && igualesRet(v1+1, v2+1); 
}

int igualesRet(int v1[], int v2[]){
    if(*v1 == -1 || *v2 == -1){ 
        return *v1 == *v2;
    }
    return (*v1 == *v2) && igualesRet(v1+1, v2+1); 
}


void igualesVoid(int v1[], int v2[], int * iguales){
    if(*v1 == -1 && *v2 == -1){
        return 1;
    }
    *iguales = (*v1 == *v2) && igualesVoid(v1+1, v2+1, iguales); 
}

--resolucion--
int igualesRet(int v1[], int v2[]){
    //Siempre chequeo con [0] porque le voy pasando de a una direccion mas adelante
    if(v1[0] == -1 || v2[0] == -1){
        return v1[0] == v2[0];
    }
    return (v1[0] == v2[0]) && igualesRet(v1+1, v2+1);
}

void igualesVoid(int v1[], int v2[], int *rta){
    if(v1[0]==-1 || v2[0]==-1){
        *rta = v1[0] == v2[0];
        return ;
    }
    *rta = *rta && (v1[0] == v2[0]);
    igualesVoid(v1+1, v2+2, rta);
}