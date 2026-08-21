#include <stdio.h>
int main()
{
    int i, k, l;
    i=1;
    printf("Que tabla queres?: "); scanf("%d", &k);
    for(i; i<=10; i++){
        l=i*k;
        printf("%d\n", l);
    }
    
    return 0;
}
