#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char* seleccionar_palabra(){
    static char *palabras[10]={"Mexico","Canada","Australia","Pakistan","Mongolia","Nicaragua","Nepal","Estonia","Lituania","Tailandia"};
    srand(time(NULL));
    int n=rand()%10;
    return palabras[n];
}

void ahorcado(char palabra[]){
    int longitud=strlen(palabra);
    char palabra_progreso[longitud+1];

    for(int i=0;i<longitud; i++){
        palabra_progreso[i]='_';
    }

    palabra_progreso[longitud]='\0';

    int vidas=5;
    char letra;

    while(vidas>0 && strcmp(palabra,palabra_progreso)!=0){
        printf("\nPalabra:");
        for(int i=0; i<longitud; i++){
            printf("%c", palabra_progreso[i]);
        }
        printf("\nVidas restantes: %d", vidas);

        printf("\nIntroduce una letra: "); scanf(" %c", &letra);

        int acierto=0;

        for(int i=0; i<longitud; i++){
            if(palabra[i]==letra){
                palabra_progreso[i]=letra;
                acierto=1;
            }
        }
        if(acierto==1){
            printf("Letra acertada\n");
        }
        else{
            vidas--;
            printf("La letra no esta ahi\n");
        }
    }

    if(vidas>0){
        printf("\nGanaste el juego, la palabra es %s", palabra);
    }
    else{
        printf("\nPerdiste todas tus vidas, suerte a la proxima");
    }
}


int main(){

    char *palabra_elegida=seleccionar_palabra();
    ahorcado(palabra_elegida);

return 0;
}
