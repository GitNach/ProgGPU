#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int *array, n, sum=0;
    scanf("%d", &n);
    array = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("%d\n", sum);
    return 0;
}
