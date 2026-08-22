#include <stdio.h>

int main()
{
    char sino;
    float t_gasolina, t_comidas, t_hospedaje, t_otros, gasolina, comidas, hospedaje, otros;
    t_gasolina=t_comidas=t_hospedaje=t_otros=0;
    sino='s';
    while(sino=='s' || sino=='S'){
        printf("Con este viaje, cuanto gastaste en:\n");
        printf("Gasolina?: \n"); scanf("%f", &gasolina);
        t_gasolina=t_gasolina+gasolina;
        printf("Comidas?: \n"); scanf("%f", &comidas);
        t_comidas=t_comidas+comidas;
        printf("Hospedaje?: \n"); scanf("%f", &hospedaje);
        t_hospedaje=t_hospedaje+hospedaje;
        printf("En alguna otra cosa?: \n"); scanf("%f", &otros);
        t_otros=t_otros+otros;
        printf("Al momento has gastado %f en gasolina, %f en comidas, %f en hospedaje, %f en otras cosas.\n", t_gasolina, t_comidas, t_hospedaje, t_otros);
        printf ("Todavia tuviste mas viajes Maria? [S/N]: \n"); scanf(" %c", &sino);
    }
    printf("En total gastaste %f en gasolina, %f en comidas, %f en hospedaje, %f en otras cosas.\n", t_gasolina, t_comidas, t_hospedaje, t_otros);
    return 0;
}