#include <stdio.h>

int main(int argc, char *argv[])
{   
    int factorial=0, num=0;
    scanf("%d", &num);
    factorial = num;
    for (int i = 1; i < num; i++) {
        factorial *= i;
    }
    printf("Factorial: %d\n", factorial);
    return 0;
}
