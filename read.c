#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    int fd, sz;
    char buf[20] = {0};
    fd = open("input.txt", O_RDONLY);
    
    if(fd < 0)
    {
        printf("Error: file can not open. error code - %d", errno);
        perror("Error description");
    }
    
    // call - 1:
    sz = read(fd, buf, 10);
    printf("call:1, fd = %d, %d bytes data read\n", fd, sz);
    buf[sz] = '\0';
    printf("Read data: %s\n", buf);

    //call - 2
    sz = read(fd, buf, 11);
    printf("call:2, fd = %d, %d bytes data read\n", fd, sz);
    buf[sz] = '\0';
    printf("Read data: %s\n", buf);
    
    //call - 3
    sz = read(fd, buf, 10);
    printf("call:3, fd = %d, %d bytes data read\n", fd, sz);
    buf[sz] = '\0';
    printf("Read data: %s\n", buf);
        
    return 0;
}
