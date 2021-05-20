#include "stdio.h"

#include <unistd.h>

#include "string.h"

void puts(const char* str)
{
    write(STDOUT_FILENO, str, strlen(str));
    write(STDOUT_FILENO, "\n", 1);
}
