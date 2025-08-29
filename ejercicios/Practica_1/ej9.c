#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{   
    int *numeros;
    int hasta;
    scanf("%d", &hasta);
    numeros = (int*) malloc(hasta*sizeof(int));
    for (int i = 0; i < hasta; i++) {
        scanf("%d", &numeros[i]);
    }
    for (int k = hasta-1; k >= 0; k--) {
        printf("%d ", numeros[k]);
    }
    printf("\n");
    return 0;
}
