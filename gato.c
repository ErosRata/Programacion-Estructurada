#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int iniciador(){
    return rand()%2;
}

char tablero[3][3]={
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };

void mostrarTablero(){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" \t[%c] ", tablero[i][j]);
        }
        printf("\n");
    }
}

void jugarHumano(){
    int m,n;
    do{
        printf("Introduce en que fila poner tu X: "); scanf("%d", &m);
        printf("y en cual columna: "); scanf("%d", &n);
        if(tablero[m-1][n-1]!=0){
            printf("Esta casilla esta ocupada, escoge otra\n");
        }

    }while(tablero[m-1][n-1]!=0);
    tablero[m-1][n-1]='X';
}

void jugarRobot(){
    int m,n;
    do{
        m = rand() % 3;
        n = rand() % 3;
    } while(tablero[m][n]!=0);

    tablero[m][n] = 'O';
}

char determinarGanador(char tablero[3][3]){
    for (int i = 0; i < 3; i++) {
        if (tablero[i][0]!=0 && tablero[i][0]==tablero[i][1] && tablero[i][1]==tablero[i][2]){
            return tablero[i][0];
        }
    }

    for (int i = 0; i < 3; i++) {
        if (tablero[0][i]!=0 && tablero[0][i]==tablero[1][i] && tablero[1][i]==tablero[2][i]){
            return tablero[0][i];
        }
    }

    if (tablero[0][0]!=0 && tablero[0][0]==tablero[1][1] && tablero[1][1]==tablero[2][2]){
        return tablero[0][0];
    }

    if (tablero[0][2]!=0 && tablero[0][2]==tablero[1][1] && tablero[1][1]==tablero[2][0]){
        return tablero[0][2];
    }

    return 0;
}

int main(){
    srand(time(NULL));

    int turno=iniciador();
    int turnos=0;
    char ganador=0;

    while(ganador==0 && turnos<9){
        if(turno==0){
            jugarHumano();
            turno=1;
        }
        else{
            jugarRobot();
            turno=0;
        }
        mostrarTablero();
        printf("\n");

        ganador=determinarGanador(tablero);

        if(ganador!=0){
            printf("Gano %c", ganador);
            break;
        }

        turnos++;
    }
    return 0;
}
