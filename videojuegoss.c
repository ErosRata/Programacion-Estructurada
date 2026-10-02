/*
Crear una estructura llamada Videojuego que almacene la siguiente información de cada videojuego: 

Título. 
Consola. 
Año. 
Clasificación. 

Utilizando esta estructura, el programa deberá solicitar y almacenar la información de n cantidad 
de videojuegos. Al finalizar, el programa deberá mostrar en pantalla el registro de todos los videojuegos 
ingresados, incluyendo su título, consola, año y clasificación. 

Eros Armanti Sierra Castillo 2154693
*/

#include <stdio.h>
#include <string.h>

struct Videojuego {
       char titulo[50];
       char consola[50];
       int anio;
       int clasificacion;
};

int main(){
    int n;
    printf("Introduce la cantidad de videojuegos que vas a ingresar: "); scanf("%d", &n);
    struct Videojuego juegos[n];
    int i;
    for(i=0; i<n; i++){
        printf("Ingresa el titulo del videojuego: "); scanf(" %49[^\n]", juegos[i].titulo);
        printf("Ingresa en que plataforma se juega: "); scanf(" %49[^\n]", juegos[i].consola);
        printf("Ingresa su año de lanzamiento: "); scanf("%d", &juegos[i].anio);
        printf("Para que edades es el juego (PEGI 3, 7, 12, 16, 18): "); scanf("%d", &juegos[i].clasificacion);
    }
    
    printf("\tTitulo \tConsola \tAño \tClasificacion");
    for(i=0; i<n; i++){
        printf("\n\t%s, \t%s, \t%d, \tPEGI %d", juegos[i].titulo, juegos[i].consola, juegos[i].anio, juegos[i].clasificacion);
    }
    
    return 0;
}

