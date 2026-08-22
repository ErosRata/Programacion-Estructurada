#include <stdio.h>

int main()
{
    char sino,sexo;
    float estatura;
    int hombre, mujer, edad;
    hombre=mujer=0;
    sino='s';
    while(sino=='s' || sino=='S'){
        if (sino=='s' || sino=='S') {
            printf("Es hombre o mujer? [H/M]: \n"); scanf(" %c", &sexo);
            printf("Cual es su estatura?: \n"); scanf("%f", &estatura);
            printf("Cuantos años tiene?: "); scanf("%d", &edad);
            if ((sexo=='h' || sexo=='H') && estatura>=1.8 && (edad>=14 && edad<=18)) {
                printf("El aspirante es admitido\n"); hombre=hombre+1;
            }
            else if ((sexo=='m' || sexo=='M') && estatura>=1.6 && (edad>=13 && edad<=15)) {
                printf("El aspirante es admitido\n"); mujer=mujer+1;
                
            }
            else printf("No es admitido :(\n");
        }
        printf("Van %d alumnos hombres inscritos y %d alumnas inscritas.\n", hombre, mujer);
        printf ("Vas a seguir inscribiendo gente? [S/N]: \n"); scanf(" %c", &sino);
    }
    printf("Fueron en total %d alumnos hombres inscritos y %d alumnas inscritas.\n", hombre, mujer);
    return 0;
}