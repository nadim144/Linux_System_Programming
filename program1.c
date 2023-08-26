#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argCount, char* argValue[])
{
    printf("Program 1 is Executing ...\n");
    
    char* argVec[] = {"Welcome","to","LSP", NULL};
    char* argEnv[] = {"ENV1 = 10","ENV2 = 100","ENV3 = 1000",NULL};
    
    execve(argValue[1], argVec, argEnv);
    
    printf("This line will not print ...\n");
    return 0;
}
