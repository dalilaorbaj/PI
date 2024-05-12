#include <stdio.h>

int sumaDivisores(int n){
    int suma=0;
    for (int i=1 ; i<n ; i++ ){
        if (n%i==0)
            suma+=i; 
    }
    return suma;
}

int sonAmigos(int n1, int n2){
    int suma1 = sumaDivisores(n1);
    int suma2 = sumaDivisores(n2);
    return (suma1==n2 && suma2 ==n1); 

}

int main(void){
    int rta = sonAmigos(220, 284);
    printf("%d\n", rta);
}

