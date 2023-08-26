#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    int i;
    printf("I am new process created by execl() library function and PID: %d\n", getpid());
    for(i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    } 
    return 0;
}
