#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "hello.h"

int hello(char *s, size_t len, const char *name)
{
    return snprintf(s, len, "Hello, %s!", name);
}