/******************************************************************************

Dada una cadena de maximo 50 caracteres, desarrollar un programa en C que calcule
la suma de los valores de los caracteres dentro de la cadena (los valores estan 
determinados por el codigo ASCII).

Eros Armanti Sierra Castillo 2154693
*******************************************************************************/

#include <stdio.h>

int main()
{
    char cadena[50];
    int i;
    int suma=0;
    printf("Introduce una cadena de caracteres: "); scanf("%49[^\n]", cadena);
    printf("Cadena: %s\n", cadena);
    
    for(i=0; cadena[i]!='\0'; i++){
        suma+=cadena[i];
    }
    
    printf("Aqui esta la suma de caracteres: %d", suma);
    
    return 0;
}