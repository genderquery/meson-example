#include <stdio.h>

#include "hello.h"

#define MESSAGE_SIZE 100

int main(int argc, char **argv)
{
    char *name;

    if (argc < 2)
    {
        name = "world";
    }
    else
    {
        name = argv[1];
    }

    char message[MESSAGE_SIZE];

    if (hello(message, MESSAGE_SIZE, name) < 0)
    {
        perror(NULL);
        return 1;
    }

    printf("%s\n", message);

    return 0;
}