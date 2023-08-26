

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i;
    printf("Total count of cmd line arg = %d\n", argc);
    
    for(i = 0; i < argc; i++)
    {
        printf("Argument number - %d and its value - %s\n", i, argv[i]);
    }
    
    return 0;
}
