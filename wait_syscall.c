
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    pid_t   pid;
    int     istatus;
    static int index = 0;
    
    printf("%d. Parent process executing before fork() syscall and it's PID: %d\n", ++index, getpid());
    pid = fork();
    
    if(pid < 0)
    {
        printf("%d. Error in fork() syscall, exited ...\n", ++index);
        exit(-1);
    }
    else if(pid == 0)
    {
        printf("%d. Child process is executing and it's PID: %d\n", ++index, getpid());
        sleep(20);  //sleep for 20 seconds
        exit(3);    // process terminated or exit wit code 3.
    }
    else
    {
        printf("%d. Parent process is executing before wait() syscall and it's PID: %d\n", ++index, getpid());
        pid = wait(&istatus);
        printf("%d. Parent process is executing after wait() syscall and it's PID: %d\n", ++index, getpid());
        printf("%d. Exit status of child process: %d\n", ++index, istatus);
    }
    
    return 0;
}
