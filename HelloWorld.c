
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
    //Using normal libray function call
    printf("Hello World!\n");
    
    //Using write system call
    write(STDOUT_FILENO, "Hello World using write system call!\n", 
                    strlen("Hello World using write system call!\n"));
    return 0;
}
