
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int gdata = 111; //global data. Initialized data segment

int main()
{
    int istack = 222; //stack frame of main()
    pid_t childpid;
    
    switch(childpid = fork())
    {
        case -1:
            printf("Error: fork sys call failed.\n");
            exit(-1);
            break;
        case 0:
            printf("I am child process with ID = %d\n", getpid());
            gdata = gdata * 3;
            istack = istack * 3;
            printf("PID = %d, gdata = %d, istack = %d\n", getpid(), gdata, istack);
            break;
         default:
            printf("I am parent process with ID = %d\n", getpid());
            printf("PID = %d, gdata = %d, istack = %d\n", getpid(), gdata, istack);
            break;
    }
    return 0;
}
