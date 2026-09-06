/******************************************************************************

Dada una matriz de m x n elementos desarrollar un programa en C el cual, genere
y muestre la suma de cada fila y columna, m y n seran ingresados por el usuario.

Eros Armanti Sierra Castillo 2154693
*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, m, n;
    i=j=0;
    int suma1=0;
    int suma2=0;
    printf("Introduce la cantidad de filas: "); scanf("%d", &m);
    printf("Introduce la cantidad de columnas: "); scanf("%d", &n);
    int matriz[m][n];
    
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Introduce un valor: "); scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("%d x %d\n", m, n);
    
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("\t%d", matriz[i][j]);
            suma1+=matriz[i][j];
        }
        printf("\t%d", suma1);
        suma1=0;
        printf("\n");
    }
    
    for(j=0; j<n; j++){
        for(i=0; i<m; i++){
            suma2+=matriz[i][j];
        }
        printf("\t%d", suma2);
        suma2=0;
    }
    

    return 0;
}