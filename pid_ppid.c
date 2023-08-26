
#include <stdio.h>
#include <unistd.h>
//#include <sys/type.h>

int main()
{
    printf("Process ID (PID) : %d\n", getpid());
    printf("Parent process ID (PPID) : %d\n", getppid());
    
    sleep(10);
    return 0;
}
