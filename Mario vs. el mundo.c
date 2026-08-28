#include <stdio.h>

int main()
{
    int T;
    int i;
    printf("Cuantos escenarios vamos a analizar?: "); scanf("%d", &T);
    for(i=0; i<T; i++){
        
        int N;
        printf("Cuantas murallas va a tener este escenario %d?: ", i+1); scanf("%d", &N);
        int altura[N];
        int j;
        for(j=0; j<N; j++){
            printf("Introduce la altura %d del escenario %d: ", j+1, i+1); scanf("%d", &altura[j]);
        }
        
        int k;
        int altos=0;
        int bajos=0;
        for(k=0; k<N-1; k++){
            if(altura[k]<altura[k+1]){
                altos++;
            }
            else if(altura[k]>altura[k+1]){
                bajos++;
            }
        }
        printf("Escenario %d: %d %d\n", i+1, altos, bajos);
    }

    return 0;
}

