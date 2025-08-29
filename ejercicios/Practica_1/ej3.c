#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;
    scanf("%d", &num);
    (num % 2 == 0) ? printf("Par\n") : printf("Impar\n");
    return 0;
}
