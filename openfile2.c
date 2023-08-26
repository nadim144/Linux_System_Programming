
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>

int main()
{
    int fd = open("newfile.txt", O_RDONLY);
    if(fd < 0)
    {
        printf("Error: file can not open ... error code - %d\n", errno);
        perror("Erorr is ");
    }
    return 0;
}
