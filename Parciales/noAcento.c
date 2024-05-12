/*Escribir una macro NO_ACENTO que recibe una expresión y, si esa expresión
representa una vocal minúscula acentuada, retorne el ASCII de la vocal sin acento. Si no es
una vocal minúscula acentuada retorna el mismo valor.
No usar funciones auxiliares*/
#include <stdio.h>
#define NO_ACENTO(c) (((c) == 'á' ? 'a' : ((c) == 'é' ? 'e' : ((c) == 'í' ? 'i' : ((c)=='ó' ? 'o' : ((c)=='ú' ? 'u' : (c)))))))

int main (void){
int c = NO_ACENTO('ó'); // c vale 'o'
printf("%c\n", c);
c = NO_ACENTO('O') + 1; // c vale 'O'
printf("%c\n", c);
c = NO_ACENTO(1 + 'ú' - 1); 
printf("%c\n", c);
c = NO_ACENTO ('r'); // c vale 'r'
printf("%c\n", c);
c = NO_ACENTO('%'); // c vale '%'
printf("%c\n", c);
c = NO_ACENTO('Ú'); // c vale 'Ú', porque no es minúscula
printf("%c\n", c);

return 0;
}
