#include <stdio.h>
#include "getnum.h"
#include <math.h>

int
main(void)
{
    double a = getfloat("Ingrese el coeficiente principal\n");   
    double b = getfloat("Ingrese el coeficiente lineal\n");
    double c = getfloat("Ingrese el termino independiente\n");

    if(a == 0)
    {
        printf("La ecuacion no es cuadratica");
    }
    else{
        double determinante = ((b*b) - (4*a*c));
        if(determinante == 0)
        {
            double solucion = ((-1*b) / (2 * a));
            printf("La unica solucion es: %f", solucion);
        }
        else if (determinante < 0)
            printf("Las soluciones son complejas");
        else{
            double solucion1 = ((-1*b + sqrt(determinante))/(2*a));
            double solucion2 = ((-1*b - sqrt(determinante))/(2*a));
            printf("Las soluciones son: %f y %f", solucion1, solucion2);
        }
    } 
    return 0;
}