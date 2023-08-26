#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

extern char** environ;

int main(int argc, char* argv[])
{
    int i;
    char** ep;
    printf("Program 2 is Executing ...\n");
    for(i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    } 
    
    for(ep = environ; ep != NULL; ep++)
    {
        printf("Environ: %s\n", *ep);
    }
    exit(0);
}
