#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    pid_t id;
    printf("Parent process before executing fork() sys call, PID = %d\n", getpid());
    id = fork();
    
    if(id < 0)
    {
        printf("Error: fork() system call failed\n");
        exit(-1);
    }
    
    if(id > 0)
    {
        printf("I am parent process, i have created child process with ID = %d\n", id);
    }
    else
    {
        printf("I am childe process created by parent process ID = %d\n", getppid());
        printf("I am child process and my PID = %d\n", getpid());
    }
    return 0;
}
