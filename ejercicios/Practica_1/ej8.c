#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int *numeros;
    int n=0, x=0, encontrado=-1;
    

    scanf("%d", &n);
    numeros = (int*) malloc(n*sizeof(int));

    for (int i = 0; i < n ; i++) {
        scanf("%d\n", &numeros[i]);
    }
    scanf("%d", &x);
    for (int k = 0; k < n; k++)  {
        if(numeros[k] == x){
            printf("El numero se encuentra en la posición: %d\n", k);
            encontrado = 1;
            break;
        }
    }
    if(encontrado == -1){
        printf("-1\n");
    }
    return 0;
}
