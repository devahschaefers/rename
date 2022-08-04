#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char** argv)
{
    if (argc != 3)
    {
        printf("Usage: %s <original name> <new> name\n", argv[0]);
        return 1;
    }
    int err = rename(argv[1], argv[2]);
    if (err == -1)
    {
        printf("%s\n", strerror(errno));
    }
}