#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   int n;
    int *matrix;
    scanf("%d", &n);
    matrix = (int*)malloc(n * n * sizeof(int));
    for (int f = 0; f < n; f++) {
        for (int c = 0; c < n; c++) {
            if(c == f){
                matrix[f * n + c] = 1;
            } else {
                matrix[f * n + c] = 0;
            }
            printf("%d ", matrix[f * n + c]);
        }
        printf("\n");
    }
    return 0;
}
