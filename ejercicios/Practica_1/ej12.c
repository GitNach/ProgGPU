#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int *matrix_a, *matrix_b, *matrix_sum;
    int n;

    scanf("%d", &n);
    matrix_a = (int*)malloc(n * n * sizeof(int));
    matrix_b = (int*)malloc(n * n * sizeof(int));
    matrix_sum = (int*)malloc(n * n * sizeof(int));
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
           printf("a(%d, %d): ", r+1, c+1);
           scanf("%d", &matrix_a[r * n + c]);
           printf("b(%d, %d): ", r+1, c+1);
           scanf("%d", &matrix_b[r * n + c]);
           matrix_sum[r * n + c] = matrix_a[r * n + c] + matrix_b[r * n + c];
        }
      
    }

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            printf("%d ", matrix_sum[r*n+c]);
        }   
        printf("\n");
    }


    return 0;
}
