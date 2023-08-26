#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    printf("I am main process and PID: %d\n", getpid());
    execl("./p2", "Md", "Nadim", "Ahmad", NULL);
    return 0;
}

