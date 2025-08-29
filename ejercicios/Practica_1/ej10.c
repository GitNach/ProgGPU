#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[])
{
    int *numeros;
    int max=INT_MIN, tamaño, min=INT_MAX;   
    scanf("%d", &tamaño);
    numeros = (int*)malloc(tamaño*sizeof(int));
    for (int i = 0; i < tamaño; i++) {
        scanf("%d", &numeros[i]);
    }
    for (int k = 0; k <= tamaño; k++) {
        numeros[k] > max ? max = numeros[k] : 0;
    }
    for (int n = 0; n <= tamaño; n++) {
        numeros[n] < min ? min = numeros[n] : 0;
    }

    printf("El maximo es: %d\n", max);    
    printf("El minimo es: %d\n", min);    
    return 0;
}
