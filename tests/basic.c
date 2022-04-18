#include <stdio.h>
#include <string.h>

#include "hello.h"

#define MESSAGE_LENGTH 100
#define EXPECTED "Hello, world!"

int main(int argc, char **argv)
{
    char message[MESSAGE_LENGTH];

    if (hello(message, MESSAGE_LENGTH, "world") < 0)
    {
        perror(NULL);
        return 1;
    }

    if (strncmp(message, EXPECTED, MESSAGE_LENGTH) != 0)
    {
        fprintf(stderr, "Expected: %s\n", EXPECTED);
        fprintf(stderr, "  Actual: %.*s\n", MESSAGE_LENGTH, message);
        return 1;
    }

    return 0;
}