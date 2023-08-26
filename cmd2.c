#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if(strstr(argv[1], "add"))
    {
        printf("Addition of %d and %d = %d\n", atoi(argv[2]), atoi(argv[3]), atoi(argv[2]) + atoi(argv[3]));
    }
    else if(strstr(argv[1], "sub"))
    {
    printf("Sustration of %d and %d = %d\n", atoi(argv[2]), atoi(argv[3]), atoi(argv[2]) - atoi(argv[3]));
    }
    else
    {
        printf("Wrong input cmd line agc ...\n");
    }
    return 0;
}
