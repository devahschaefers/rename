#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


void handle_err(int err, char* old, char* new)
{    
    int errno_value = err;
    if (errno_value == ENOENT) //file already exists
    {            
        perror(old); /* <original file name>: No such file or directory */
        exit(1);
    }
    if (errno_value == ENOTEMPTY)
    {
        perror(new); /* <new file name>: Directory not empty */
        exit(1);
    }
    else
    {
        printf("%s\n", strerror(errno_value)); /* <error message> */
    }
}