#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, mayor;
    scanf("%d %d", &a, &b);
    mayor = (a > b ? a : b);
    printf("El mayor es: %d\n", mayor);
    return 0;
}
