#include <stdio.h>

int main()
{
    int nResult = remove("newfile.txt");
    
    if(nResult < 0)
    {
        printf("Sorry, file can not be deleted ...\n");
    }
    return 0;
}
