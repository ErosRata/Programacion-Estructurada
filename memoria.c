/*
Desarrollar un programa en C, en el cual dada una matriz de n x m y n es igual a m,
el programa generara la matriz mostrándola y además mostrara la misma matriz, pero con
sus diagonales invertidas (hacer uso de funciones para invertir las diagonales de la matriz
y puede hacer uso de la función rand para llenar la matriz con valores de 1 al 100, malloc para
separar la memoria y free para liberarla).

Eros Armanti Sierra Castillo 2154693
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generarMatriz(int **matriz, int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            matriz[i][j]=rand()%100;
        }
    }
}

void mostrarMatriz(int **matriz, int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void invertirDiagonal(int **matriz, int n){
    int i, cambiador;
    for(i=0; i<n; i++){
        cambiador=matriz[i][i];
        matriz[i][i]=matriz[i][n-i-1];
        matriz[i][n-i-1]=cambiador;
    }
}

int main(){
    srand(time(NULL));
    int i, n;
    printf("Introduce la dimension de la matriz (cuadrada): "); scanf("%d", &n);
    int **matriz=(int **)malloc(n*sizeof(int *));
    for(i=0; i<n; i++){
        matriz[i]=(int *)malloc(n*sizeof(int));
    }

    puts("Matriz original:");
    generarMatriz(matriz, n);
    mostrarMatriz(matriz, n);
    puts("Matriz con las diagonales invertidas:");
    invertirDiagonal(matriz, n);
    mostrarMatriz(matriz, n);

    for(i=0; i<n; i++){
        free(matriz[i]);
    }
    free(matriz); matriz=NULL;

    return 0;
}
