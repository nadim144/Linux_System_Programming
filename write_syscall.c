#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>


int main()
{
    char buff[100];
    //open file to read data into buff.
    int fd_to_read = open("to_read.txt", O_RDONLY, 0755);
    
    if(fd_to_read < 0)
    {
        printf("Error: to_read.txt file can not open ...\n");
        exit(1);
    }
    
    //To read 100 byte data into buffer. 
    int nCountRead = read(fd_to_read, buff, 100);
    
    if(nCountRead < 0)
    {
        printf("Error: couldn't read data into buffer ....\n");
        exit(1);
    }
    else
    {
        printf("Data read = %d byte\n", nCountRead);
        printf("%s\n", buff);
    }
    
    //write buff data into to_write.txt file.
    
    int fd_to_write = open("to_write.txt", O_RDWR | O_CREAT, 0755);
    
    if(fd_to_write < 0)
    {
        printf("Error: to_write.txt file can not open ...\n");
        exit(1);
    }
    
    int nCountWrite = write(fd_to_write, buff, 100);
    
    if(nCountWrite < 0)
    {
        printf("Error: couldn't write data into fd_to_write ....\n");
        exit(1);
    }
    return 0;
}
