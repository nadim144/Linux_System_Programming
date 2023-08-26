
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>


int main()
{
    int fd;     // file descriptor for log.txt
    int i;      // Itterator
    char buf[100] = {'\0'};
    
    fd = open("./log.txt", O_RDWR | O_SYNC, 0777);
    
    if(fd < 0)
    {
        printf("Error: log.txt file can't open. error code - %d\n", errno);
        perror("Error Description");
    }
    
    for (i = 0; i < 99; i++)
    {
        buf[i] = 'b';
    }
    buf[++i] = '\n';
    
    
    int len = (int)strlen(buf);
    
    
    for(i = 0; i < 5; i++)
    {
        write(fd, buf, (int)strlen(buf));
    }
    
    printf("program exited\n");
    
    close(fd);
    
    return 0;
}
