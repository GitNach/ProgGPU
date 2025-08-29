#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char string[100];
    int sum=0;
    fgets(string, sizeof(string), stdin);

    for (int i = 0; i < strlen(string)-1; i++) {
        string[i] != (' ') ? sum += 1 : 0; 
    }
    printf("%d\n", sum);
    return 0;
}
