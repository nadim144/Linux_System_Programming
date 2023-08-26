
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>


int main()
{
    
    //SPECIAL USER GROUP OTHER_USER
    //R:4       W:2        X:1    
    
    int fd = open("newfile.txt", O_RDWR | O_CREAT, 0755);
    
    if(fd < 0)
    {
        printf("Error in file opening/creating ...\n");
    }
    
    int nValue = close(fd);
    
    if(nValue < 0)
    {
        printf("Error in file closing...\n");
    }
    
    return 0;
}
