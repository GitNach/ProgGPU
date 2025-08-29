#include <stdio.h>

int main(int argc, char *argv[])
{
    int hasta = 0, suma = 0, i = 0;
    scanf("%d", &hasta);
    while (i <= hasta) {
        suma += i;
        i++;
    }
    printf("La suma es: %d\n", suma);
    return 0;
}
