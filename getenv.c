#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = putenv("NADIM = 1024");
    printf("PATH = %s\n", getenv("PATH"));
    printf("HOME = %s\n", getenv("HOME"));
    printf("PARAM1 = %s\n", getenv("NADIM"));
    return 0;
}
