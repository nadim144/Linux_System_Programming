#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>


int main()
{
    char buff[100];
    //open file to read data into buff.
    int fd = open("to_read.txt", O_RDONLY, 0755);
    
    if(fd < 0)
    {
        printf("Error: to_read.txt file can not open ...\n");
        exit(1);
    }
    
    //To read 100 byte data into buffer.
    
    int nCount = read(fd, buff, 100);
    
    if(nCount < 0)
    {
        printf("Error: couldn't read data into buffer ....\n");
        exit(1);
    }
    else
    {
        printf("Data read = %d byte\n", nCount);
        printf("%s\n", buff);
    }
    
    return 0;
}
